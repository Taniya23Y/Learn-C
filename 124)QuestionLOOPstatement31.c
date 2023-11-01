// nested do - while loop.
#include <stdio.h>  
int main()  
{  
  /*printing the pattern 
     ******** 
     ******** 
     ******** 
     ******** */  
int i=1;  
do           // outer loop  
{  
    int j=1;  
    do       // inner loop  
   {  
      printf("*");  
      j++;  
   }while(j<=8);  
    printf("\n");  
    i++;  
     }while(i<=4);  
} 