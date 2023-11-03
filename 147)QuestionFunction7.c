// functions in c
/*write program to check prime number using function with arugument,with return_type*/
/****************************************************************************
 * statement = check prime number using function with arugument,with return_type.
 * programmer name = taniya yadav
*****************************************************************************/

#include  <stdio.h>
int check_prime(int);                  // function declaration

int main()
{
    int num, result;
    // taking input from user
    printf("To check this number is prime or not :\n");
    scanf("%d", &num);
    result = check_prime(num);                  // function calling
   
     if(result == 1)
     {
     printf("this number %d is prime number.", num);
     }
     else
     {
        printf("this number %d is not a prime number.", num);
     }
    return 0;
}

int check_prime(int a)                 // function defining
{
   int c;
   for ( c = 2; c <= a - 1; c++)
   {
     if( a % c == 0)
        return 0;
   }
   return 1;
}