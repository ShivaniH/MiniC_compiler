
// Merge sort

int a[50];

int merge(int l, int m, int h)
{
	int b[50], i, j, k;
    i = l; j = m + 1; k = l;

	while(i<=m && j<=h)
	{
		if(a[i] < a[j])
		{  
            b[k] = a[i]; 
            i += 1;
        }
		else 
        {  
            b[k] = a[j]; 
            j += 1; 
        }
		k += 1;
	}

	while(i <= m)
	{
		b[k] = a[i]; 
        i += 1; k += 1;
	}
	while(j <= h)
	{
		b[k] = a[j]; 
        j += 1; k += 1;
	}

	for(i = l; i <= h; i += 1)
	{
		a[i] = b[i];
	}
    
    return 0;
}


int mergeSort(int l, int h)
{
	if(l < h)
	{
		int m;
        m = (l + h) / 2;

		mergeSort(l, m);
		mergeSort(m+1, h);
		merge(l, m, h);
	}
    return 0;
}


int main() 
{ 
    int i, n;

    n = 10;

    for (i = 0; i < n; i += 1)
    {
        a[i] = 10 - i;
    } 

	mergeSort(0, n-1); 

	for (i = 0; i < n; i += 1) 
    {
		callout("printf", "%d ", a[i]);
    }

	callout("printf", "\n");

	return 0; 
} 
