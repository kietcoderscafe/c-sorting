 //selection sort//
 //Selection sort is a sorting algorithm, specifically an in-place comparision sort//
 /* it includes standard input output header files */
 #include <stdio.h> 
 /* it includes functions involving memory allocation, process control and conversions */
 #include <stdlib.h>  
 /* it includes console input output header fles */
 #include <conio.h>
 int smallest(int c[], int k, int n);
 void selection_sort(int c[], int n); 
 /* program execution starts from the main() function */
 void main()
 { 
 /* declaring variables */
     int c[10], i, n;
     printf("\n enter the number of elements in the array: "); 
     scanf("%d", &n);
     printf("\n enter the elements of the array: "); 
 /* the loop starts iterating and the elements will be entered */
     for(i=0;i<n;i++)
     {
                     scanf("%d", &c[i]);
     }               
                     selection_sort(c,n);
                     printf("\n the sorted array is: \n"); 
 /* the loop starts iterating and the elements get sorted in ascending order */ 
                     for(i=0;i<n;i++)
                     {
                                     printf("%d\t", c[i]);
                     }
                                     int smallest(int c[], int k, int n)
                                     {
                                         int pos = k, small=c[k], i;
                                         for(i=k+1;i<n;i++)
                                         { 
 /* the statement gets executed if arr[i] is less than smallest element */
                                                           if(c[i]< small)
                                                           {
                                                                    small = c[i];
                                                                    pos = i;
                                                           }        
                                          }             
 /* it returns the sorted element which will be stored in temperory array */    
                                                                    return pos;
                                      }                              
                                                                    void selection_sort(int c[],int n)
                                                                    {
                                                                         int k,pos, temp;
                                                                         for(k=0;k<n;k++)
                                                                         {
                                                                                         pos = smalest(c, k, n);
                                                                                         temp = c[k];
                                                                                         c[k] = c[pos];
                                                                                         c[pos] = temp;
                                                                         }
                                                                    }
}    
                                                                                                                     


