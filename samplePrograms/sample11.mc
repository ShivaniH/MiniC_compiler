
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

    callout("printf", "Enter some lowercase text (less than 10000 characters)\n");
    // scanf("%[^\n]%*c", text);
    text = callout("scanString");

    n = callout("strlen", text);

    for(i = 0; i < n; i += 1)
    {
        if(text[i] >= 'a' && text[i] <= 'z')
        {
            histogram[text[i] - 'a'] += 1;
        }
    }

    callout("printf", "Alphabet histogram: (values from a to z)\n");
    for(i = 0; i < 26; i += 1)
    {
        callout("printf", "%d ", histogram[i]);
    }
    
    return 0;
}