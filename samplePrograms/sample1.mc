
int main() 
{
    int n, k, i, j, sum;
    sum = 0;

    callout("printf", "Enter n and k: ");

    // scanf("%d %d", &n, &k);
    n = callout("scanInt");
    k = callout("scanInt");

    int value;

    for(i = 1; i <= n; i += 1)
    {
        value = i;

        for(j = 0; j < (k-1); j += 1)
        {
            value = value * i;
        }

        sum += value;
    }

    callout("printf", "The sum is %d", sum);

    return 0;
}