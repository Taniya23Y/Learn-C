// linear search
// Array in c

#include <stdio.h>

int search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
      
    }
    return 0;
}


int main()
{
    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
    int key;
    // input for an array
    printf("\nEnter the Element to be searched: ");
    scanf("%d", &key);

    int Found = search(arr, 10, key); // calling function

    if(Found)
    {
        printf("key present in array.");
    }
    else
    {
        printf("key is not present in array.");
    }
    return 0;
}