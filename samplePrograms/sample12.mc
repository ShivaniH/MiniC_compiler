#include <stdio.h>
#include <string.h>

// Unique words (Note: Bonus file support not done. Reading text from stdin)

char text[10000];
char words[100][100];
char uniqueWords[100][100];

int main() 
{ 
    int i, j, k, n, m;

    printf("Enter a sentence in lowercase (less than 10000 characters)\n");
    scanf("%[^\n]%*c", text);

    n = strlen(text);

    int numWords, wordStart;
    numWords = 1;
    wordStart = 0;
    k = 0;

    for(i = 0; i < n; i += 1)
    {
        if(text[i] == ' ')
        {
            numWords += 1;
            m = 0;

            for(j = wordStart; j < i; j += 1)
            {
                words[k][m] = text[j];
                m += 1;
            }
            words[k][m] = '\0';

            wordStart = i+1;
            k += 1;
        }
    }

    m = 0;
    for(j = wordStart; j < n; j += 1)
    {
        words[k][m] = text[j];
        m += 1;
    }
    words[k][m] = '\0';

    strcpy(uniqueWords[0], words[0]);

    int uniqueIndex, flag;
    uniqueIndex = 0;

    for(i = 1; i < numWords; i += 1)
    {
        flag = 0;
        for(j = 0; j <= uniqueIndex; j += 1)
        {
            if(strcmp(words[i], uniqueWords[j]) == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            uniqueIndex += 1;
            strcpy(uniqueWords[uniqueIndex], words[i]);
        }
    }

    printf("The list of unique words in this text is:\n");

    for(i = 0; i <= uniqueIndex; i += 1)
    {
        printf("%s\n", uniqueWords[i]);
    }

    return 0;
}