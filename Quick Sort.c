/*PROGRAM FOR QUICK SORT*/
/*
The quick sort use divide and conquer strategy
*/
#include<stdio.h>
/*
includes standard input and output header files
*/
#include<conio.h>
/*
console input and output
*/
#include<stdlib.h>
/*
includes standard library functions
*/
#define SIZE 10
/*
defining a constant and creating a macro
*/
void Quick(int A[SIZE],int,int);
/*
initializing an unsorted array*/
int partition(int A[SIZE],int,int);
/*
splitting the array in two parts*
/
/*
the left sublist will contain the elements less than pivot and right sublist contains elements greater than pivot
*/ 
void swap(int A[SIZE],int*,int*);
/*
swapping of elements
*/
int n;
int main()
/*
can call any no. of arguments
*/ 
{
/*
open parenthesis for clarity of code
*/
    int i;
    /*
    int is a datatype in c
    */
    int A[SIZE];
    /*
    array size
    */
    printf("\n\t\t Quick Sort Method \n");
    /*
    printf is a function used to print the quoted sentence in the output
    */
    printf("\n Enter Total numbers to sort :");
    /*
    we have to enter no of elements to sort in output
    */
    scanf("%d,&n");
    /*
    scanf function is used to allow us to accept input from standard in
    */
    for(i=0;i<n;i++)
    /*
    for loop is used to repeat a block of code
    */
    {
          /*
          open parenthesis for clarity of code
          */
     printf("\nEnter %dth number : ",i+1);
     /*
     here i is increemented
     */
     scanf("%d",&A[i]);
     /*
     address of element in an array
     */
     }
     /*
     closed parenthesis for completion of for loop
     */
     Quick(A,0,n-1);
     printf("\n\n\t Sorted Array Is: \n");
     /*
     after for loop the sorted array
     */
     for(i=0;i<n;i++)
     /*
     increement of i until the element pointed by i is greater than A[low]
     */ 
     printf("\t%d ",A[i]);
     /*
     element in A[i]
     */
     getch();
     return 0;
     }
     /*
     closed parenthesis for completion of loop
     */
     /*
     this function is to sort the elements in a sublist
     */
     void Quick(int A[SIZE],int low,int high)
     /*
     intializing low and high
     */
     {
      /*
      open parenthesis
      */           
     int m,i;
     
     if(low<high)
     /*
     conditin if low is less than high
     */
     {
              /*
              open parenthesis
              */
       m=Partition(A,low,high);
 /*
 partition of list in two sublists
 */      
       Quick(A,low,m-1);
       /*
       it represents sublist 1
       */
       Quick(A,m+1,high);
       /*
       it represents sublist 2
       */
       }
       /*
       closed parenthesis
       */
       
       }
       /*
       closed parenthesis
       */
       /*
       this function is to partition a list and decide the pivot element
       */
       int Partition(int A[SIZE],int low,int high)
/*
shows partition of low and high
*/
       {
                /*
                open parenthesis
                */
        int pivot=A[low],i=low,j=high;
        /*
        here we consider A[low] as pivot,i as low and j as high
        */
        while(i<=j)
        /*
        looping condition
        */
        {
                /*
                open parenthesis
                */
        while(A[i]<=pivot)
        /*
        condition using loop if A[i]<pivot
        */
        
        i++;
        /*
        increement of i
        */
        while(A[i]>pivot)
        /*
        condition if A[i]>pivot
        */
        j--;
        /*
        decreement of j
        */
        if(i<j)
        /*
        condition if i is less than j
        */
        swap(A,&i,&j);
        /*
        here swapping is done if j crossed i and i>j
        */
        }
        /*
        closed parenthesis
        */
        swap(A,&low,&j);
        /*
        swapping of low and j elements
        */
        return j;
        /*
        j value is return
        */
        }
        /*
        closed parenthesis
        */
        void swap(int A[SIZE],int *i,int *j)
        /*
        swapping of i and j elements
        */
        {
                 /*
                 closed parenthesis
                 */
         int temp;
         /*
         here consider temporary element
         */
         temp=A[*i];
         /*
         substitute value of temp as A[*i]
         */
         A[*i]=A[*j];
         /*
         here A[i] = A[j]
         */ 
         A[*j]=temp;
         /*
         here A[*j]=temp
         */ 
         }
         /*
         closed parenthesis
         */                                                                 
