// functions in c
/*calling function------->
                          1] call by value
                          2] call by reference 
*/
/***************************************************
 * statement = calling function (call by value)
* programmer name = taniya yadav
***********************************************************/

#include <stdio.h>
// function prototype , also called declaration
void swap(int a, int b);

int main()
{
    int m = 22, n = 44;
    // calling swap function by value
    printf("Values before swap m = %d\n and n = %d", m, n);
    swap(m,n);
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\n Value after swap m = %d\n and n = %d", a, b);
}