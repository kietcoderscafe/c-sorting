//The buble sort gets its name because as array elements are sorted they gradually "bubbles" to their proper position.
//A bubble sort will compare two adjacent element of ana array and will swap them they are not in order.
//The compare starts with the first and second element.After that it will compare the second with the third one and soo on....the processs continues till the end of the bubble sort array
//When the end of the array is reached the bubble sort algorithm will returns to element one and starts the process all over again.
//as we can see in the source below,the bubble sort algorithm is easy to programm. but the bubble sot algorithm is slower than any other sorting algorithms.Because the  Because the sort always needs a final extra pass to check to see that there are no more swaps are made. If there are no more swaps the swap flag is put up and the process ends

 
#include <stdio.h> //It is a statement which tells the compiler to insert the  contends of stdio at that particular place 
 
int main() //function returns the int value.
{
  int array[100], n, c, d, swap; //int[] array is similar to the int array[] 
 
  printf("Enter number of elements\n"); //prinf formates the data to stdout
  
  scanf("%d", &n);// the scanf function allows to accept input from standard in.
  int uses-%d
  float uses-%f
  char uses-%c
  
  
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++) // A "for loop" genearlly iterates the function.
  
    scanf("%d", &array[c]);
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) //a "if loop" says mainly about the condition
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", array[c]);
 
  return 0;//
} //Let us do an example by which we can understand bubble sort 
The list "5,4,9,7,2,8" needs to be sorted from lowest to highest.the following steps should be taken
PASS 1 :
First (5) and second (4) elents compared.4 is less than 5 therfore elements inverted .
Current List:4,5,9,7,2,8
second (5) AND NOW THIRD (9) elments compared.in correct order.so no change
Current list:4,5,9,7,2,8
9 and 7 are compared and inverted .
Current list:4,5,7,9,2,8
9 and 2 are compared and inverted
Current list:4,5,7,2,9,8
9 and 8 are compared and inverted
Current list:4,5,7,2,8,9
PASS 2:
same method used in pass1 applied to current list (4,5,7,2,8,9)
resultant list 4,5,2,7,8,9
PASS 3:
Resultant list (4,2,5,7,8,9)
PASS 4:
Resultant list 2,4,5,7,8,9
PASS 5: 
-NO changes would be made in this pass therefore the algorithm has reached its termination point and the list is sorted.

-It is worth nothing that at the end of pass 1 .The largest element 9 has been moved to the end of the list.similarly in pass2 the second 
largest element 8 has been moved to the second last position in the list and so on.....Thus pattern always occurs in the bubble sort .
-Related to this point,it is also noteworthy that pass2 only need to deal with (n-1) elements {where n is the no.of elemnts in the original list}.Pass 3 only n
needs to deal with (n-2)...........This is because at the end of each pass,another element has been put in its correct position at the end of the list'
this leavs one less element that needs to be sorted to the next pass


	


