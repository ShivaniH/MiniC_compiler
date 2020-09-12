
int a[10000], n;

int permutation(int start, int end)
{
    int i, temp;

    if (start == end)
    {
        int j;
        for(j = 0; j < n; j += 1)
        {
            callout("printf", "%d ", a[j]);
        }

        callout("printf", "\n");
    }
    else 
    {
        for(i = start; i <= end; i += 1)
        {
            temp = a[start];
            a[start] = a[i];
            a[i] = temp;

            permutation(start+1, end);

            temp = a[start];
            a[start] = a[i];
            a[i] = temp;
        }
    }

    return 0;
}

int main() 
{
    int i;
    
    callout("printf", "Enter a positive integer (less than or equal to 10000): ");

    // scanf("%d", &n);
    n = callout("scanInt");

    for(i = 0; i < n; i += 1)
    {
        a[i] = i + 1;
    }

    callout("printf", "The list of all permutations of numbers from 1 to %d:\n", n);

    permutation(0, n-1);

    return 0;
}