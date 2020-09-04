#include <stdio.h>

// Enumerating pythagorean triplets

int main() 
{
    ulong x, x2, y, z, x2y2, limit, count;      // ulong is unsigned long int in miniC

    limit = 100000000;
    count = 0;

    printf("List of all pythagorean triplets:\n");

    for (x = 1; x < limit; x += 1) 
    {
        x2 = x * x;
        y = x + 1;
        z = y + 1;

        while (z <= limit) 
        {
            x2y2 = x2 + y * y;

            while (z * z < x2y2) 
            {
                z += 1;
            }
            if (z * z == x2y2 && z <= limit) 
            {
                printf("%lu %lu %lu\n",x, y, z);
                count += 1;
            }
            
            y += 1;
        }
    }

    printf("The total number of pythagorean triplets printed is %lu\n", count);

    return 0;
}