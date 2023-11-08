// pointer notation to access 2-d array
#include <stdio.h> 
int main(int argc, char const *argv[])
{
    int s[4][2]  = {
                      {1234, 56},
                      {1212, 33},
                      {1434, 80},
                      {1312, 78}
                   };
    int i, j;

    // for loop
    for ( i = 0; i <= 3; i++ ) 
    { 
            printf ( "\n" ); 
            for ( j = 0; j <= 1; j++ ) 
            printf ( "%d ", *( *( s + i ) + j ) ); 
    } 

    
    return 0;
}
// #include<stdio.h>
// int main( ) 
// { 
//  int s[4][2] = { 
//                   { 1234, 56 }, 
//                   { 1212, 33 }, 
//                   { 1434, 80 }, 
//                   { 1312, 78 } 
//                 }; 
//  int i, j; 
//  for ( i = 0 ; i <= 3 ; i++ ) 
//  { 
//  printf ( "\n" ); 
//  for ( j = 0 ; j <= 1 ; j++ ) 
//  printf ( "%d ", *( *( s + i ) + j ) ); 
//  } 

//  return 0;
// } 
