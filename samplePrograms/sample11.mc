#include <stdio.h>
#include <string.h>

// Alphabet histogram (Note: Bonus file support not done. Reading text from stdin)

char text[10000];

int main() 
{ 
    int i, n;
    int histogram[26];

    for(i = 0; i < 26; i += 1)
    {
        histogram[i] = 0;
    }

    printf("Enter some lowercase text (less than 10000 characters)\n");
    scanf("%[^\n]%*c", text);

    n = strlen(text);

    for(i = 0; i < n; i += 1)
    {
        if(text[i] >= 'a' && text[i] <= 'z')
        {
            histogram[text[i] - 'a'] += 1;
        }
    }

    printf("Alphabet histogram: (values from a to z)\n");
    for(i = 0; i < 26; i += 1)
    {
        printf("%d ", histogram[i]);
    }
    
    return 0;
}