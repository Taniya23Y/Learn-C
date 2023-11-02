#include <stdio.h>
int main()
{
   int columns, i, space, k = 0;
   // taking input from user
   printf("Enter the number of columns \n");
   scanf("%d", &columns);

   // looping statement (outer and inner looping of for loop) and while loop
   for ( i = 1; i <= columns; i++, k = 0)
   {
     for (space = 1; space <= columns - i; space++)
     {
      printf(" ");
     }
     while (k != 2 * i - 1 )
     {
      printf("* ");
      ++k;
     }
     printf("\n");
  } 
  return 0;
}