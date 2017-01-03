A MERGE SORT BY TEAM SWAT
RAM NIKHIL
BHAVYA
PAARVATHI
BHAAGI
MERGESORT:Which means that implementation preserves the input order of equal elements in the sorted output.


#include<stdio.h>
/*header file stdio.h is included for input and output commands*/
#include<conio.h>
void merge(int arr[],int min ,int mid ,int max );
/* merge() function is declared for merging elements*/
void part(int arr[],int min ,int max );
/* part() function is for creating sub-lists*/
int main()
/*main function*/
{
 int arr[30];
 /* array size of 30 is declared */
 int i,size;
 /* variables i,and size of int datatype is declared for min values and  size of array*/
 printf("\n\t------- Merge sorting method -------\n\n");
 /*a prompting message for merge sort is written in printf statement*/
 printf("Enter total no. of elements : "); 
 /* enter the no. elements you want */
 scanf("%d",&size);
 /* to read array size*/
 for(i=0;i<size;i++)
/* a for loop to enter  array  size*/
 {
   printf("Enter %d element : ",i+1);
   /*indices of elements */
   scanf("%d",&arr[i]);
 }
 void part(int arr[],int min,int max);
/* void() of returntype void is defined with three arguments*/
 printf("\n\t------- Merge  sorted elements -------\n\n");
 for(i=0;i<size;i++)                 
  /* enter the random number in unparticular order*/
 printf("%d ",arr[i]);
 /*desired elements are entered that are to be sorted*/
 getch();
 return 0;
}


void part(int arr[],int min,int max)
{
 int mid;
 if(min<max)
 {
   mid=(min+max)/2;
   /*two sub-lists are created*/
   part(arr,min,mid);
   /*function for first sub-list*/
   part(arr,mid+1,max);
   /*function for second sub-list*/
   merge(arr,min,mid,max); 
       /* merge sort level of arrangement of values in a order */
 }
}


void merge(int arr[],int min,int mid,int max)
{
  int tmp[30];
  int i,j,k,m; 
  j=min;
  m=mid+1;
  for(i=min;j<=mid && m<=max ;i++) 
     /* Arrangement of values in middle level to maximum level using for loop*/
  {
     if(arr[j]<=arr[m])
 /*min value is checked */
     {
         tmp[i]=arr[j];
         /*a temporary variable tmp is assigned for the value in arr[j]*/
         j++;
         /* j index is incremented*/
     }
     else
     /*if above condition is not satisfied*/
     {
         tmp[i]=arr[m];
         /*mid value is assigned to tmp[i]*/
         m++;
         /* index m is incremented  */
     }
  }
  if(j>mid)  
    /* if j values is less than mid statisfying if else condition */
  {
     for(k=m; k<=max; k++)
     {
         tmp[i]=arr[k];
         i++;
     }
  }
  else
  {
     for(k=j; k<=mid; k++)
     {
        tmp[i]=arr[k];
        i++;
     }
  }
  for(k=min; k<=max; k++)
     arr[k]=tmp[k];
}
