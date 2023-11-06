/*Write a program to calculate the number of occurence of given number in array using
 function with array and number as argument? */
/*******************************************************************
 * statement = number of occurence in given number 
 * programmer name = taniya yadav 
**********************************************************************/

#include <stdio.h>

// funtion declaration
int Ocurrence(int arr[], int num, int to_find);


int main(void)
{
    int num;
    int arr[] = {1,2,2,2,3,44,44,44,77,56,56,44};

    // taking input from user
    printf("Enter the number: \n");
    scanf("%d", &num);

    printf("Entered elements in array are: \n");
    for (int i = 0; i < 12; i++)
    {
        printf("arr[%d] = %d\n", i,arr[i]);
    }
    
    // function call
    int findarr_44 = Ocurrence( arr, 12, 44);
    int findarr_2 = Ocurrence( arr, 12, 2);
    
    printf("Number of occurence in given numbers are: %d\n", findarr_44);
    printf("Number of occurence in given numbers are: %d\n", findarr_2);
    return 0;
}

// funtion defintion
int Ocurrence(int arr[], int num, int to_find)
{
    int count = 0;
    for (int  i = 0; i < num; i++)
     if (arr[i] == to_find)
        count++;
     
     return count;    
} 
