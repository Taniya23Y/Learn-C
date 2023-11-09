/*Twenty-five numbers are entered from the keyboard into an 
array. The number to be searched is entered through the 
keyboard by the user. Write a program to find if the number to 
be searched is present in the array and if it is present, display 
the number of times it appears in the array.*/
/************************************************************
 * statement = find that number and occurence of that given number
 * programmer name = taniya yadav
****************************************************************/

#include <stdio.h>
int main()
{
    int arr[25];
    int n, i, keynum, count = 0;
    // taking input from user
    printf("Enter how many number you want to display in array:\n");
    scanf("%d",&n);
    for (int i = 0; i <= 24; i++)
    {
        printf("arr[%d] = ", i+0);
       scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d", &keynum);
    /*linear search begins*/
    //for loop
    for (int i = 0; i <=24; i++)
    {
        if(keynum == arr[i]){
            count++;
        }
    }
    if(count){
        printf("%d Element is present in the array %d times\n", keynum, count);
    }
    else{
        printf("%d Element is not present in the array\n", keynum);
    }
    return 0;
}