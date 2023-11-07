// array in c 
//Suppose we have an array num[] = {24, 34, 12, 44, 56, 17}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num[] = {24,34,12,44,56,17};
    int i;

    // for loops 
    for (int i = 0; i < 6; i++)
    {
       printf("\n Element number of %d" , i);
       printf(" Address = %u", &num[i]);
    }
    
    return 0;
}

// Explanation-->
/*
In this program, to begin with we have collected the base address 
of the array (address of the 0th element) in the variable j using the 
statement, 
j = &num[0] ; /* assigns address 65512 to j */ 
/*When we are inside the loop for the first time, j contains the 
address 65512, and the value at this address is 24. These are 
printed using the statements, 
printf ( "\naddress = %u ", j ) ; 
printf ( "element = %d", *j ) ; 
On incrementing j it points to the next memory location of its type 
(that is location no. 65514). But location no. 65514 contains the 
second element of the array, therefore when the printf( )

*/