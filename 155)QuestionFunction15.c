// functions in c
/*calling function------->
                          1] call by value
                          2] call by reference (talk about pointers also)
*/
/***************************************************
 * statement = call function ( call by reference )
* programmer name = taniya yadav
***********************************************************/
#include <stdio.h>
// function prototype ,also called function declaration
void swap(int *a, int *b);

int main()
{
    int m = 22, n = 44;
    printf("\n Values before swap\n m = %d\n and n = %d\n", m, n);

    //calling swap function by reference 
    swap(&m, &n);
    return 0;
}

void swap(int *a, int *b)   // function defintion
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
  printf("\n Values after swap\n a = %d\n and b = %d\n", *a, *b);
}