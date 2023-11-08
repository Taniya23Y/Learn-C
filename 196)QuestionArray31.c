// Array with pointers

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c[4];
    int i;

    for (int i = 0; i < 4; ++i)
    {
        //here x is format specifier which contains hexadecimal  values
        printf("Address of c[%d] = %x\n", i, &c[i]); 
    }
    
    return 0;
}

// output fro that is ---> notice taht there is one byte difference between any two 
//consecutive elements of array 