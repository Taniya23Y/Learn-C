/*Pointer and array*/
// Example of pointer airthematic

#include <stdio.h>
int main() 
{ 
 int i = 3, *x ; 
 float j = 1.5, *y ; 
 char k = 'c', *z ; 

 printf ( "\nValue of i = %d", i ) ; 
 printf ( "\nValue of j = %f", j ) ; 
 printf ( "\nValue of k = %c", k ) ; 

 x = &i ; 
 y = &j ; 
 z = &k ; 

 printf ( "\nOriginal address in x = %u", x ) ; 
 printf ( "\nOriginal address in y = %u", y ) ; 
 printf ( "\nOriginal address in z = %u", z ) ;

 x++ ; 
 y++ ; 
 z++ ; 

 printf ( "\nNew address in x = %u", x ) ; 
 printf ( "\nNew address in y = %u", y ) ; 
 printf ( "\nNew address in z = %u", z ) ; 

 return 0;
}

// Explanation---->
/*
Observe the last three lines of the output. 65526 is original value in 
x plus 2, 65524 is original value in y plus 4, and 65520 is original 
value in z plus 1. This so happens because every time a pointer is 
incremented it points to the immediately next location of its type. 
That is why, when the integer pointer x is incremented, it points to 
an address two locations after the current location, since an int is 
always 2 bytes long (under Windows/Linux since int is 4 bytes 
long, new value of x would be 65528). Similarly, y points to an 
address 4 locations after the current location and z points 1 
location after the current location. This is a very important result 
and can be effectively used while passing the entire array to a 
function.
*/ 