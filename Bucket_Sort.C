
       



                   

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
	
	//header files for including standard and consolidate input-output statements.

	#include<stdio.h>
	#include<conio.h>

	//function for BUCKET_SORT begins
	//this function includes creation of bucket and then applying insertion sort for sorting elements in ascending order.
	//initially consider the maximum element among the given array values
	//consider the size of the bucket as 10.
	//for inseting the values in buckets we have to initially find divider which is represented as "d".
	//then find the value of the element["j"] which is to be inserted in the bucket.
	//finally sorting the elements using sorting techniques.
 
	//the keyword void is used for returning a value.
	//Bucket_Sort is the function name.
	//data type int is used for declaration of variables arr[20] and n.
	//arr[20] represents the size of the variable arr is 20.
	void Bucket_Sort(int arr[20], int n)
	{

	//declaration of variables i,j,maximum and bucket.
	//variable buc represents the value which will be stored in the bucket.
	//variable max represents the maximum value in the given list of the array.
	    int i,j,buc,max;
	//variable d is declared in terms of float
	//since the value of d might be a decimal value.
	    float d;
	//thic command is used for clearing the screen. 
            clrscr(); 
	// using the below formula the value of the variable d is found
	//the keyword ceil is used to round of the obtained value to its next value
	    d= ceil ((max+1)/buc); 
	//the for loop is used for running the array numbers from 0 to n-1.
	    for(i=0;i<=n-1;i++)
	    {
	//using the below formula th value of j is found
	//the keyword floor is used to remove the decimal part of the obtained value and considers only the integer part of it 
	        j = floor (arr[i]/d);  
	    }
	//sorting of elements in the bucket happens basing on the insertion sort technique.
 	// using for loop the value of i gets incremented from 0 to n-1.
	    for(i=0;i<=n-1;i++)                                        
	    {
	//the bucket value gets the vlue of the array of variable i, i.e., arr[i]  and j value becomes i-1
	//this process continues till all the values in the array are done,i.e., till i becomes n-1.
	        buc=arr[i];
		j=i-1;
	//when j value is greater than 0 and arr[j] is greater than bucket
		while(j>=0&&arr[j]>buc)
 
 		{
	//the array value arr[j+1] becomes arr[j] and j becomes j-1.
		    arr[j+1]=arr[j];
		    j=j-1;
		}
	//when j value is not greater than 0 and arr[j] is not greater than bucket
	// then arr[j+1] gets the bucket value
        	arr[j+1]=buc;
	    }
	}

	//main function begins
	//here 'int' represents the return type of the main function
	int main()
        {
	// array initialization and size declaration
            int arr[100];
	//initialisation of variables n and i.
	//n represents the number of elements to be inserted whrer as i is used for running the for loop for n numbeer of values .
            int n,i;
            clrscr();
	//printf statement is used as for printing a statement in the output.
            printf("Enter How many Numbers : ");
	//scanf statement is used fpr reading the value of n
            scanf("%d",&n);
            printf("Enter the %d elements to be sorted:\n",n);
	//for loop is used for running the value of the array of i from 0 to n .
            for(i=0;i<n;i++)
            {
                scanf("%d", &arr[i]);
            }
            printf("\nThe array of elements before sorting : \n");
	//for loop is used for running the array values of i from 0 to n before sorting.
 	   for (i=0;i<n;i++)
            {
	//the below statement is used for printing the array values before sorting
                printf("%d ", arr[i]);
            }
	//printf is an output statement.
            printf("\nThe array of elements after sorting : \n");
	//function call
            Bucket_Sort(arr, n);
	//for loop is used here for running the array values of i from 0 to n in a sorted order.
	    for (i = 0;i < n;i++)
            {
	//this statement is used for printing the sorted array values
                printf("%d ", arr[i]);
            }
            printf("\n");
            return 0;
	}
     
     
