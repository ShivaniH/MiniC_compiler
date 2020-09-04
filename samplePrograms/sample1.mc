#include <stdio.h>

int main() 
{
    int n, k, i, sum;
    sum = 0;

    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);

    for(i = 1; i <= n; i += 1)
    {
        sum += i^k;     // ^ is exponentiation in my MiniC grammar
    }

    printf("The sum is %d", sum);

    return 0;
}