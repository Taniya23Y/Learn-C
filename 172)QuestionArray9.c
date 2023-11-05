//Array in c
// bubble sort 

#include <stdio.h>
int main()
{
   int data[100], i, n, step, temp;
   printf("Enter the number of element to be sorted: ");
   scanf("%d", &n);
   // for loop
   for ( i = 0; i < n; i++)
   {
      printf("%d.Element number: ", i+1);
      scanf("%d", &data[i]);
   } 
    
   // 2 for loop
   for (int step = 0; step < n-1; ++step)
   for ( i = 0; i < n-step-1; i++)
   {
      if (data[i] > data[i+1])
      {
         temp = data[i];
         data[i] = data[i+1];
         data[i+1] = temp;
      }   
   }
   
   printf("\nIn ascending order: ");
   for ( i = 0; i < n; i++)
   {
       printf(" %d", data[i]);  
   }
    return 0;
}