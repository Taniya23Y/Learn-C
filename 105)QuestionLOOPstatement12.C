/* write a program to find factors of any number*/
/*******************************************************
 * statement = factors of any number
 * programmer name = taniya yadav
******************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, num;
    // taking iput from user
    printf("enter a number:\n");
    scanf("%d", &num);

    printf("all factors of given number is:%d\n", num);

    // using for loop
    for ( i = 1; i <= num; i++)
    {
       if (num % i == 0)
       {
          printf("%d\n", i);
       }
       
    }
    
    return 0;
}
