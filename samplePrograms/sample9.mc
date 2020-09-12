
// Sum of 2 input matrices

int main() 
{
    int i, j, r, c, a[100][100], b[100][100], sum[100][100];

    callout("printf", "Enter the number of rows (between 1 and 100): ");
    // scanf("%d", &r);
    r = callout("scanInt");

    callout("printf", "Enter the number of columns (between 1 and 100): ");
    // scanf("%d", &c);
    c = callout("scanInt");

    callout("printf", "\nEnter the elements of the 1st matrix:\n");
    for (i = 0; i < r; i += 1)
    {
        for (j = 0; j < c; j += 1) 
        {
            callout("printf", "Enter element a%d%d: ", i + 1, j + 1);
            // scanf("%d", &a[i][j]);
            a[i][j] = callout("scanInt");
        }
    }

    callout("printf", "Enter the elements of the 2nd matrix:\n");

    for (i = 0; i < r; i += 1)
    {
        for (j = 0; j < c; j += 1) 
        {
            callout("printf", "Enter element b%d%d: ", i + 1, j + 1);
            // scanf("%d", &b[i][j]);
            b[i][j] = callout("scanInt");
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

    callout("printf", "\nSum of the two matrices: \n");
    for (i = 0; i < r; i += 1)
    {
        for (j = 0; j < c; j += 1) 
        {
            callout("printf", "%d   ", sum[i][j]);
        }
        callout("printf", "\n");
    }

    return 0;
}