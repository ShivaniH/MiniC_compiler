#include <stdio.h> 

// Insertion sort

int a[10];

int insertionSort(int n) 
{ 
	int i, key, j; 

	for (i = 1; i < n; i += 1) 
    { 
		key = a[i]; 
		j = i - 1; 

		while (j >= 0 && a[j] > key) 
        { 
			a[j + 1] = a[j]; 
			j = j - 1; 
		} 
		a[j + 1] = key; 
	} 
    return 0;
} 

int main() 
{ 
    int i, n;

    n = 10;

    for(i = 0; i < n; i += 1)
    {
        a[i] = 10 - i;
    } 

	insertionSort(n); 

	for (i = 0; i < n; i += 1) 
    {
		printf("%d ", a[i]); 
    }

	printf("\n"); 

	return 0; 
} 
