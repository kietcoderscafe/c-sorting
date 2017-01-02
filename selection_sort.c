//selection sort//
//Selection sort is a sorting algorithm, specifically an in-place comparision sort//
/* it includes standard input output header files */
#include <stdio.h>
/* it includes functions involving memory allocation, process control and conversions */
#include <stdlib.h>
/* it includes console input output header fles */
#include <conio.h>
int smallest(int arr[], int k, int n);
void selection_sort(int arr[], int n);
/* program execution starts from the main() function */
void main()
{
/* declaring variables */
int arr[n], i, n;
printf("\n enter the number of elements in the array: ");
scanf("%d", &n);
printf("\n enter the elements of the array: ");
/* the loop starts iterating and the elements will be entered */
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
selection_sort(arr, n);
printf("\n the sorted array is: \n");
/* the loop starts iterating and the elements get sorted in ascending order */
for(i=0;i<n;i++)
{
printf(" %d\t", arr[i]);
}
}
int smallest(int arr[], int k, int n)
{
int pos = k, small=arr[k], i;
for(i=k+1;i<n;i++)
{
/* the statement gets executed if arr[i] is less than smallest element */
if(arr[i]< small)
{
small = arr[i];
pos = i;
}
}
/* it returns the sorted element which will be stored in temperory array */
return pos;
}
void selection_sort(int arr[],int n)
{
int k, pos, temp;
for(k=0;k<n;k++)
{
pos = smallest(arr, k, n);
temp = arr[k];
arr[k] = arr[pos];
arr[pos] = temp;
}
}
