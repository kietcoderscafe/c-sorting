/*"expandables team":
aditya
shivani
sai leela
roopa
Implementation of "Radix Sort" using c programming
'Radix sort'or 'Counting sort' is a linear and stable algorithm  for integers
Uses the concept of sorting names in alphabetical order
Radix sort is also known as 'bucket sort'
There are two classifications of radix sorting:
 1.least significant digit(LSD) radix sort
  2.most significant digit(MSD) radix sort
COMPLEXITY OF RADIX SORT:
The time complexity of radix sort  is O(kn) , the alorigthm  runs in O(n) asymptotic time.
/* C implementation of Radix Sort*/
#include<stdio.h>
// A utility function to get maximum value in arr[]
int getMax(int a[],int n)
{
	int mx = a[0] ,i; //mx maximum value in arr[]//
	for( i=1; i<n; i++)
		{
		    if (a[i] > mx)
                mx = a[i];
		}
	return mx;
}

// A function to do counting sort of arr[] according to
// the digit represented by exp.
void countS(int a[], int n, int exp)
{
	int op[n]; // output array
	int i, count[10] = {0};

	// Store count of occurrences in count[]
	for (i = 0; i < n; i++)
            count[ (a[i]/exp)%10 ]++;

	// Change count[i] so that count[i] now contains actual
	// position of this digit in output[]
	for (i = 1; i < 10; i++)
	    count[i] += count[i - 1];

	// Build the output array
	for (i = n - 1; i >= 0; i--)
	{
	    op[count[ (a[i]/exp)%10 ] - 1] = arr[i];
	    count[ (a[i]/exp)%10 ]--;
	}

	// Copy the output array to arr[], so that arr[] now
	// contains sorted numbers according to current digit
	for (i = 0; i < n; i++)
	    a[i] = op[i];
}

// The main function to that sorts arr[] of size n using
// Radix Sort
void sort(int a[], int n)
{
	// Find the maximum number to know number of digits
	int m = getMax(a,n);
	int exp;

	// Do counting sort for every digit. Note that instead
	// of passing digit number, exp is passed. exp is 10^i
	// where i is current digit number
	for (exp=1;m/exp >0; exp*= 10)
	    countS(a,n,exp);
}

// A utility function to print an array
void print(int a[], int n)
{
    int i;
    printf("The sorted order is :");
    for (i=0;i<n;i++)
        printf("%d \n",a[i]);
}

// Driver program to test above functions
int main()
{
	int a[10],i,m=10;
	printf("enter the elements : \n");
	for(i=0;i<m;i++)
            scanf ("%d",&a[i]);
	int n = sizeof(a)/sizeof(a[0]);
	sort(a,n);
	print(a, n);
	return 0;
}
