// functions in c
/*calling function------->
                          1] call by value
                          2] call by reference (talk about pointers also)
*/
/***************************************************
 * statement = pointers(*)
* programmer name = taniya yadav
***********************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    // int i=3;
    //  int *j;

//     // taking input.
    // printf("\nAddress of i = %u", &i);   // 1
    // printf("\nAddress of i = %u", j);    // 2
    // printf("\nAddress of j = %u", &j);   // 3
    // printf("\nValue of j = %u", j);      // 4
    // printf("\nValue of i = %d", i);      // 5
    // printf("\nValue of i = %d", *(&i));  // 6
    // printf("\nValue of i = %d", *j);     // 7
 
 int i = 3, *j, **k; 
 j = &i; 
 k = &j; 

 // taking input 
 printf("\nAddress of i = %u", &i);   // 1
 printf("\nAddress of i = %u", j );   // 2
 printf("\nAddress of i = %u", *k);   // 3
 printf("\nAddress of j = %u", &j);   // 4
 printf("\nAddress of j = %u", k);    // 5
 printf("\nAddress of k = %u", &k);   // 6
 printf("\nValue of j = %u", j);      // 7
 printf("\nValue of k = %u", k);      // 8
 printf("\nValue of i = %d", i);      // 9
 printf("\nValue of i = %d", *(&i));  // 10
 printf("\nValue of i = %d", *j);     // 11
 printf("\nValue of i = %d", **k);    // 12
    
    return 0;
}
