       /* c program for heap sorting method*/
       
       
       /* Heap sort is one of the best sorting method being in place and with no quadratic worst case scenarios.*/
       
       /* Sorting of elements in ascending order using merge sort*/
       
       
       /* including header file stdio for input and output */ 
       
	   #include<stdio.h>
       
	   //including header file conio 
	   
       #include<conio.h>
       
       // including manage function
       
       void manage(int *, int);
       
      // including heapsort function
      
       void heapsort(int *, int, int);
       
      //  including main function 
      
       int main()
         { 
        //declaring an array with variable n to store elements
        
          int n[20]; 
       
          // Declaring variable i and j for iteration , size to store the no. of elements, temp and k to store elements
       
           int i,j,size,tmp,k;
        
           printf("\n\t------- Heap sorting method -------\n\n"); // Displays heap sorting method in output
       
           // Displays enter the no of elemens to sort in the output
       
           printf("Enter the number of elements to sort : ");
       
           scanf("%d",&size); // Takes input from the user
       
       	
          printf("Enter %d element" ,size ); // Displays  enter the elements
   
          for(i=0; i<=size; i++) // The entered elements from user are entered through iteration 
 
         // The entered elements from the user are added one by one through iteration from for loop
	    
	     {
		
          scanf("%d",&n[i]);
       
	      manage(n,i);
       
	     }
	     // Declaring varible j as the value of size of elements
	  
         j=size;
       
          // we use for loop and assign value 1 to i  
         // The loop continues till the value of i is less than or equal to j
	    
         for(i=1; i<=j; i++)
       
	     {
 	         //  temp is assigned with first value of array n
		  
             tmp=n[1];
             
             /*  The last value of array n is assigned  to the first value of n*/
             
             n[1]=n[size];
             
             // the tmp value is assigned to the last value of array n
             
             n[size]=tmp;   
			               
             // The value of size is decreased using decrement function
             
             size--; 
            
            // Heap sort function is used to the elements in array n 
            
             heapsort(n,1,size);
          } 
		   
         printf("\n\t------- Heap sorted elements -------\n\n"); // Displays Heap sorted elements in he output 
          
          // Assigned the value of j to size
          
		 size=j;
		 
		 // for loop is used to print the sorted elements
		 
         for(i=1; i<=size; i++)
         
         {
		 
		     printf("%d ",n[i]); // Displays the elements in the array
		 
	     }
         
		 getch(); // getch is used to get the character in the output
          
         // we are returning 0 value for successfull exit
         return 0;
          }   


         // The manage function is used to manage the no. of elements used in sorting purpose
         
		 void manage(int *n, int i)
          {  
             // declaring variable tmp 
         
		     int tmp;
		 
		     // tmp is assigned with the values in the array
		  
             tmp=n[i];
         
		     /* while loop is used to continue the loop from i>1 to n/2 is < than tmp */
         
             while((i>1)&&(n[i/2]<tmp))
           
		 {
		   
             /* till the loop continues,
		     The array n[i] is assigned with value n[i/2]*/ 
		    
             n[i]=n[i/2];
             
			 // i is assigned with i/2
             
			 i=i/2;
         }
         // The value of temp is assigned to n[i]
         n[i]=tmp;
          }

         // The heapsort function is used
         
         void heapsort(int *n, int i, int size)
          {
          	
             // The variables tmp and j are declared
         
             int tmp,j;
         
             // tmp is assigned with array n values
         
             tmp=n[i];
         
             // Variable j is assigned with value i*2
         
             j=i*2;
         
             // the iteration while loop is used to continue loop until j is smaller than size
         
		     while(j<=size)
         
		 {
		     // the condition is given using if function
		 	
             if((j<size)&&(n[j]<n[j+1]))
         
            // the value of j is increased so incremnt function is used
         
		     j++;
		 
		     // the condition is given using if function
		 
             if(n[j]<n[j/2]) 
        
		     // to stop while loop break is used
         
		     break;
		 
		     // the value of n[j] is assigned to n[j/2]
		 
             n[j/2]=n[j];
         
		     j=j*2; // j is assigned with j*2 value
          
		  }
        
            // n[j/2] is assigned with tmp value
		  
		    n[j/2]=tmp;
          }   

/************* EXPECTED OUTPUT ***************/
/* ------- Heap Sorting method--------
 Enter the no. of elements to sort :5
 Enter 5 elements: 64
                     27 
                     43
                     85
                     50
  --------Heap Sorted elements--------
     27
	 43
	 50
	 64
	 85 
	   */
	                       
