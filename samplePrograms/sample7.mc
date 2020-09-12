
// Radix sort

int a[10];

int MaxNum(int n)
{
    int max, i;

    max = a[0];

    for (i = 1; i < n; i += 1)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int NumOfDig(int y) 
{
    if (y == 0) 
    {
        return 1;
    }

    int num;
    num = 0;

    while (y != 0) 
    {
        y = y / 10;
        num += 1;
    }

    callout("printf", "num of digits in biggest number = %d \n", num);
    return (num);
}

int radixSort(int n) 
{
    int bucket[10][10], divisor, i, j, k, l, y, rem, max, maxdig;

    divisor = 1;

    max = MaxNum(n);
    maxdig = NumOfDig(max);

    int bcount[10];     // 10 bucket counts for 10 digits (0-9)
    bcount[0] = 0;
    bcount[1] = 0;
    bcount[2] = 0;
    bcount[3] = 0;
    bcount[4] = 0;
    bcount[5] = 0;
    bcount[6] = 0;
    bcount[7] = 0;
    bcount[8] = 0;
    bcount[9] = 0;

    for (i = 0; i < maxdig; i += 1) 
    {
        for (j = 0; j < n; j += 1) 
        {
            rem = (a[j] / divisor) % 10;
            bucket[rem][bcount[rem]] = a[j];
            bcount[rem] += 1;
        }

        j = 0;
        for (k = 0; k < 10; k += 1) 
        {
            l = 0;
            while (bcount[k] != 0) 
            {
                a[j] = bucket[k][l];
                j += 1;
                bcount[k] -= 1;
                l += 1;
            }
        }
        
        for (y = 0; y < 10; y += 1) 
        {
            bcount[y] = 0;
        }

        divisor = divisor * 10;
    }

    return 0;
}

int main() 
{ 
    int i, n;

    n = 10;

    for (i = 0; i < n; i += 1)
    {
        a[i] = 100 - i;
    } 

	radixSort(n); 

	for (i = 0; i < n; i += 1) 
    {
        callout("printf", "%d ", a[i]);
    }

    callout("printf", "\n");

	return 0; 
} 
