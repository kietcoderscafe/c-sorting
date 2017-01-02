
       



                   

	/*Implementation of BUCKET SORT using c programming*/
	//Bucket sort, or bin sort, is a sorting algorithm that works by distributing the elements of an array into a number of buckets.
	//Each bucket is then sorted individually, either using a different sorting algorithm, or by recursively applying the bucket sorting algorithm.
	// Bucket sort can be implemented with comparisons and therefore can also be considered a comparison sort algorithm.
	//The computational complexity estimates involve the number of buckets.
	//how this sorting works is as follows:
	//Initially we have to set up an array of empty buckets, then put each object into its bucket.
	//After this, we sort each bucket with elements, and then we pass through each bucket in order and gather all the elements into the original array.
	//Also, the number of buckets can be determined by the programmer.
	//Bucket sort is mainly useful when input is uniformly distributed over a range.
	//in fact, if each bucket has size 1 then bucket sort degenerates to counting sort. 
	//The variable bucket size of bucket sort allows it to use O(n) memory instead of O(M) memory, where M is the number of distinct values;
	//in exchange, it gives up counting sort's O(n + M) worst-case behavior.
	
	//header files for including standard and consolidate input-output sttements.

	#include<stdio.h>
	#include<conio.h>

	//function for BUCKET_SORT begins
	//this function includes creation of bucket and then applying insertion sort for sorting elements in ascending order.
	//initially consider the maximum element among the given array values
	//consider the size of the bucket as 10.
	//for inseting the values in buckets we have to initially find divider which is represented as "d".
	//then find the value of the element["j"] which is to be inserted in the bucket.
	//finally sorting the elements using sorting techniques. 

	void Bucket_Sort(int arr[20],int n)
	{

	//declaration of variables i,j,maximum and bucket

	    int i,j,buc,max;
	    float d;
	//to clear the old output 
            clrscr(); 
	// ceil = to round of the next obtained digit
	    d= ceil ((max+1)/buc); 
	    for(i=0;i<=n-1;i++)
	    {
	        j = floor (arr[i]/d);  
	    }
	//sorting the bucket elements using insertion sort technique.
 	// when i= 0 and i <= n-1 then increment the digit of "i"
	    for(i=0;i<=n-1;i++)                                        
	    {
	        buc=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>buc)
 
 		{
		    arr[j+1]=arr[j];
		    j=j-1;
		}

		arr[j+1]=buc;
	    }
	}

	//main function begins

	int main()
        {
	// array initialization and size declaration
            int arr[100];
            int n,i;
            clrscr();
            printf("Enter How many Numbers : ");
            scanf("%d",&n);
            printf("Enter the %d elements to be sorted:\n",n);
	//for loop is being used to run the given array elements one by one.

            for(i=0;i<n;i++)

            {
                scanf("%d",&arr[i]);
            }

            printf("\nThe array of elements before sorting : \n");
        
 	   for (i=0;i<n;i++)

            {
	//the below statement is used for printing the array values before sorting
                printf("%d ", arr[i]);
            }
	//the below statement is used for printing the array values after sorting
            printf("\nThe array of elements after sorting : \n");
	//function call
            Bucket_Sort(arr, n);
            
		for (i = 0;i < n;i++)
            
		{
                	printf("%d ", arr[i]);
                }
            		printf("\n");
			return 0;
      		}
     
     




