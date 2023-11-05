//Array in c
// insertion sort 

#include <stdio.h>
int main()
{
    int array[10];
    int keynum,found = 0;

    // taking input from user
    printf("Enter 10 element one by one\n");
    // 1 for loop 
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Input array is \n\n");
    // 2 for loop
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n Enter the element to be searched\n");
    scanf("%d", &keynum);

    /*Linear serach begins*/
    // 3 for loop
    for (int i = 0; i < 10; i++)
    {
        if (keynum == array[i])
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
       printf("Element is present in the array\n");
    }
    else
    {
        printf("Element is not present in the array\n");
    }
    
   return 0; 
}