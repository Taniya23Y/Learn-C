//Relation between array and pointer

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, class[6], sum = 0;
    // taking input from user
    printf("Enter the numbers: \n");
    
    //for loop
    for ( i = 0; i < 6; i++)
    {
       scanf("%d", (class+i)); // class+i is equivalent to &class[i]
       sum += *(class+i); //*(class+i) is eqy=uivalent to class[i]
    }

    printf("sum = %d", sum);
    
    return 0;
}
