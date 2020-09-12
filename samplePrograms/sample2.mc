
// Check if an input number n is prime

int main() 
{
    int n, i, flag;
    flag = 0;

    callout("printf", "Enter a positive integer: ");

    // scanf("%d", &n);
    n = callout("scanInt");

    if (n == 1)
    {
        callout("printf", "1 is neither prime nor composite.\n");
    }
    else 
    {
        if (n == 2)
        {
            callout("printf", "2 is a prime number.\n");
        }
        else 
        {
            if (n % 2 == 0)
            {
                callout("printf", "%d is not a prime number.\n", n);
            }
            else
            {
                for (i = 3; i <= n / 2; i += 1) 
                {
                    if (n % i == 0) 
                    {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 0)
                {
                    callout("printf", "%d is a prime number.", n);
                }
                else
                {
                    callout("printf", "%d is not a prime number.", n);
                }
            }
        }
    }
    
    return 0;
}