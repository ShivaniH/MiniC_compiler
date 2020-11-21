int main() 
{
    int n, sum, i, k;
    sum = 0;

    sum = 5 + 37 - 'e' + 9;

    callout("printf", "Enter n and k: ");

    // scanf("%d %d", &n, &k);
    n = callout("scanInt");
    k = callout("scanInt");

    for(i = 1; i <= n; i += 1)
    {
        sum += i^k;     // ^ is exponentiation in my MiniC grammar
    }

    callout("printf", "The sum is %d", sum);

    return 0;
}