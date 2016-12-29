/*** Insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time
     it is much less efficient on large lists than more advanced algorithms such as quick sort, 
     heap sort,or merge sort  ***/ 

/*    Sorting Elements of an array in ascending order 
                              Using INSERTION SORT algorithm    */

/* including header file stdio.h for input and output */
#include<stdio.h>
int main()   /*it is the main function where the execution begins */
{
// declaring variables that are used in the program
   int i,j,s,temp,a[20];
   printf("****** INSERTION SORT *****"); // displays insertion sort in the output screen 
   printf("\n Enter total elements: ");
// reads input from the user
   scanf("%d",&s);
   printf("Enter %d elements: ",s);
   for(i=0;i<s;i++) // requesting  input from the user and iterating to obtain an array
   {
	 scanf("%d",&a[i]);
   }
// we use for loop which starts from i with value 1 and assign the value of i index in the variable temp
   for(i=1;i<s;i++)
   {
// temp is assigned with every element of array a[] in iteration
      temp=a[i];
// try from the (i-1)th position
      j=i-1;
/* Move elements of arr[0..i-1], that are greater than temp , 
                         to one position ahead of their current position */
      while((temp<a[j])&&(j>=0))
	  {
        a[j+1]=a[j];   // move the temp to the next position
        j=j-1;        //  decrementing the positin of j 
      }
      a[j+1]=temp;    //  temp is inserted in the appropriate position as needed to be attained 
   }
// diplaying title of the result
   printf("After sorting: ");
   for(i=0;i<s;i++)   // iterating the output as entire elements of the array need to be displayed 
   {
      printf(" %d",a[i]); //  display the result to the user
   }
// as we are using int function we need to return 0 to show successful exit
   return 0; 
}
