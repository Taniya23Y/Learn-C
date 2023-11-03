// functions in c
/*write program to calculate square of the number using function*/
/****************************************************************************
 * statement =  calculate square of the number using function.
 * programmer name = taniya yadav
*****************************************************************************/

#include <stdio.h>
int main() 
{ 
 float square(float);  // function prototype declaration
 float a, b; 
 // taking input from user
 printf("\nEnter any number "); 
 scanf("%f", &a); 

 b = square(a);  // function calling
 printf("\nSquare of %f is %f", a, b); 
} 

float square(float x)  // function defining 
{ 
 float y; 
 y = x * x; 
 return (y); 
}
