// Exercise questions form yashwant kanethkar 5th edition

/*#include <stdio.h>
int main()
{
 int num[26], temp ; 
 num[0] = 100 ; 
 num[25] = 200 ; 
 temp = num[25] ; 
 num[25] = num[0] ; 
 num[0] = temp ; 
 printf ( "\n%d %d", num[0], num[25] ) ; 

 return 0;
}*/

/*#include <stdio.h>
int main()
{
 int array[26], i ; 
 for ( i = 0 ; i <= 25 ; i++ ) 
 { 
 array[i] = 'A' + i ; 
 printf ( "\n%d %c", array[i], array[i] ) ; 
 }

 return 0;
}*/

/*#include <stdio.h>
int main(int argc, char const *argv[])
{
 int sub[50], i ; 
 for ( i = 0 ; i <= 48 ; i++ ) ; 
 { 
 sub[i] = i ; 
 printf ( "\n%d", sub[i] ) ; 
 }

return 0;
}*/

/*#include<stdio.h>
 char mixed[100] ; 
int main(int argc, char const *argv[])
{
 int a[10], i ;
 for ( i = 1 ; i <= 10 ; i++ ) 
 { 
    printf ( "%d", a[i] ) ; 
 scanf ( "%d", a[i] ) ; 
//  printf ( "%d", a[i] ) ; 
 }

    return 0;
}*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int size ; 
 scanf ( "%d", &size ) ; 
 int arr[size] ; 
 for ( int i = 1 ; i <= size ; i++ ) 
 { 
 scanf ( "%d", &arr[i] ) ; 
 printf ( "%d", arr[i] ) ; 
 
 }
    return 0;
}


