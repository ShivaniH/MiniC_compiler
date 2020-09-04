#include <stdio.h>

// Sum of 2 input matrices

int main() 
{
    int i, j, r, c, a[100][100], b[100][100], sum[100][100];

    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);

    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter the elements of the 1st matrix:\n");
    for (i = 0; i < r; i += 1)
    {
        for (j = 0; j < c; j += 1) 
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the 2nd matrix:\n");
    for (i = 0; i < r; i += 1)
    {
        for (j = 0; j < c; j += 1) 
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // adding the two matrices
    for (i = 0; i < r; i += 1)
    {
        for (j = 0; j < c; j += 1) 
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of the two matrices: \n");
    for (i = 0; i < r; i += 1)
    {
        for (j = 0; j < c; j += 1) 
        {
            printf("%d   ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}