#include <stdio.h>

// Product of 2 input matrices

int main() 
{
    int i, j, r1, c1, r2, c2, a[100][100], b[100][100], c[100][100];

    printf("Enter the number of rows and columns for the 1st matrix (between 1 and 100): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the number of rows and columns for the 2nd matrix (between 1 and 100): ");
    scanf("%d %d", &r2, &c2);

    while (c1 != r2) 
    {
        printf("Error! Number of columns in the first matrix is not equal to the number of rows in the 2nd matrix. \nEnter number of rows and columns again.\n");

        printf("Enter the number of rows and columns for the 1st matrix (between 1 and 100): ");
        scanf("%d %d", &r1, &c1);

        printf("Enter the number of rows and columns for the 2nd matrix (between 1 and 100): ");
        scanf("%d %d", &r2, &c2);
   }

    printf("\nEnter the elements of the 1st matrix:\n");
    for (i = 0; i < r1; i += 1)
    {
        for (j = 0; j < c1; j += 1) 
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the 2nd matrix:\n");
    for (i = 0; i < r2; i += 1)
    {
        for (j = 0; j < c2; j += 1) 
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r1; i += 1) 
    {
        for (j = 0; j < c2; j += 1) 
        {
            c[i][j] = 0;
        }
    }

    int k;

    // multiplying the two matrices
    for (i = 0; i < r1; i += 1)
    {
        for (j = 0; j < c2; j += 1) 
        {
            for(k = 0; k < c1; k += 1)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nProduct of the two matrices: \n");
    for (i = 0; i < r1; i += 1)
    {
        for (j = 0; j < c2; j += 1) 
        {
            printf("%d   ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}