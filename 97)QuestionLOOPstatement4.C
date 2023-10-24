/* write a program to calculate or to print table of number*/
/*************************************************
 * statement = table of given number(this is done by using 4 various ways to implement)
 * programmer name = taniya yadav
*****************************************************/

#include <stdio.h>
void tab_num(int x);
int main(int argc, char const *argv[])
/*
{
      int num, i=1, t=1;
      // taking input from user
      printf("enter a number:\n");
      scanf("%d", &num);

      // while loop
      while (i<=10)
      {
        t=num*i;
        i++;
      
        printf(" table of number %d*%d=%d.\n", num, i, (num*i));
      
      }
      
    return 0;
}
*/
/*
   // generate table with for loop
   {
   int num, i;
   printf("Enter the number for generating a table of that number:\n");
   scanf("%d", &num);

   // loop
   for(i=1;i<=10;i++)
   {
    printf("%d * %d = %d\n", num, i, (num*i));
   } 
  return 0;
  }
  */
 /*
 // generating table with do while loop
 {
  int num,i=1;
  printf("Enter the number to genearte table :\n");
  scanf("%d", &num);

  // do - while loop for generating table of given number
   do
   {
     printf("%d * %d = %d\n", num, i, (num*i));
     i++;
   } while (i<=10);
   return 0;
 }
 */
//generating table with for loop and user defined function
{
  int number;
  // taking input from user
  printf("Enter the number to be in the table form:\n");
  scanf("%d", &number);

  printf("\n The multiplication table of %d \n",number);
  tab_num(number);
  return 0;
}

void tab_num(int number)
{
  int i;
  // for loop and user defined function
  for (i=1; i <= 10; i++)
  {
    printf("%d * %d = %d\n", number, i, (number * i));
  }
  
  }







