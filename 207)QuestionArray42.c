// More on arrays, Arrays and pointers 
// [E] What would be the output of the following programs
#include <stdio.h>
//int change ( int *b, int n );
//int f ( int *x, int y );
int main()
 
 /*int b[5] = {10, 20, 30, 40, 50}; 
 int i; 
 for (i = 0 ; i <= 4 ; i++) 
 printf("\n%d" ,*(b + i)); */


 /*{ 
 int b[] = { 0, 20, 0, 40, 5 }; 
 int i, *k; 
 k = b; 
 for (i = 0; i <= 4; i++) 
 { 
 printf("\n%d", *k);
 k++; 
 } 
*/

/*{
 int a[ ] = { 2, 4, 6, 8, 10 } ; 
 int i ; 
 int getChange = change(a, 5); 
 for ( i = 0 ; i <= 4 ; i++ ) 
 printf( "\n%d", a[i] ) ; 
 return 0;
} 

int change ( int *b, int n ) 
{ 
 int i ; 
 for ( i = 0 ; i < n ; i++ ) 
 *( b + i ) = *( b + i ) + 5 ; 
}*/

/*{
    int a[5], i, b = 16 ; 
 for ( i = 0 ; i < 5 ; i++ ) 
 a[i] = 2 * i ; 
 int ft= f(a, b); 
 for ( i = 0 ; i < 5 ; i++ ) 
 printf ( "\n%d", a[i] ) ; 
 printf( "\n%d", b ) ; 

 return 0;
} 
int f ( int *x, int y ) 
{ 
 int i ; 
 for ( i = 0 ; i < 5 ; i++ ) 
 *( x + i ) += 2 ; 
 y += 2 ; 
}*/

/*{ 
 static int a[5] ; 
 int i ; 
 for ( i = 0 ; i <= 4 ; i++ ) 
 printf ( "\n%d", a[i] ) ; 
 return 0;
} */

/*{
 int a[5] = { 5, 1, 15, 20, 25 } ; 
 int i, j, k = 1, m ; 
 i = ++a[1] ; 
 j = a[1]++ ; 
 m = a[i++] ; 
 printf ( "\n%d %d %d", i, j, m );
    return 0;
}*/

/*{
    int array[6] = { 1, 2, 3, 4, 5, 6 } ; 
 int i ; 
 for ( i = 0 ; i <= 25 ; i++ ) 
 printf ( "\n%d", array[i] ) ;

    return 0;
}*/

/*{
    int a[5] = { 5, 1, 15, 20, 25 } ; 
 int i, j, k = 1, m ; 
 i = ++a[1] ; 
 j = a[1]++ ; 
 m = a[i++] ; 
 printf ( "\n%d %d %d", i, j, m ) ;
    return 0;
}*/

/*{ 
    int sub[50], i ; 
 for ( i = 1 ; i <= 50 ; i++ ) 
 { 
 sub[i] = i ;                // no error occurs
 printf ( "\n%d" , sub[i] ) ; 
 }
    return 0;
}*/

/*{ 
    float a[ ] = { 13.24, 1.5, 1.5, 5.4, 3.5 } ; 
 float *j, *k ; 
 j = a ; 
 k = a + 4 ;     // answer = invalid operands to binary / (have 'float *' and 'int')
 j = j * 2 ; 
 k = k / 2 ; 
 printf ( "\n%d %d", *j, *k ) ;
    return 0;
}*/

/*{
    int max = 5 ; 
 float arr[max] ; 
 for (  i = 0 ; i < max ; i++ )  // i is not inailize
 scanf ( "%f", &arr[i] ) ; 
    return 0;
}*/


    
   