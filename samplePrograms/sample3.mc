#include <stdio.h>

// Sum of prime numbers strictly less than n

int main() 
{
    int n, i, j, sum, flag;
    sum = 2;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if(n == 1 || n == 2)
    {
        printf("The sum is %d \n", 0);
    }
    else
    {
        if(n == 3)
        {
            printf("The sum is %d \n", 2);
        }
        else
        {
            for(i = 3; i < n; i += 2)
            {
                flag = 0;
                for (j = 3; j <= i / 2; j += 1) 
                {
                    if (i % j == 0) 
                    {
                        flag = 1;
                        break;
                    }
                }

                if(flag == 0)
                {
                    sum += i;
                }
            }

            printf("The sum is %d \n", sum);
        }
    }

    return 0;
}