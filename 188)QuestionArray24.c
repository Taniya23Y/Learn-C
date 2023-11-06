#include <stdio.h>

int main() 
{ 
 int arr[] = { 10, 20, 30, 45, 67, 56, 74 }; 
 int *i, *j; 
 i = &arr[1]; 
 j = &arr[5]; 

 printf(" %d\n %d\n", j - i, *j - *i); 
 return 0;
} 