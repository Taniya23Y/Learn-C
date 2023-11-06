/*write a program to search a particular number in an array and replace it with a user
 defined number*/
 /***********************************************************
  * statement = search a number in array and replace it with users choice
  * programmer name = taniya yadav
 *************************************************/

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num;
//     int key;
//     int arr[8] = {1,3,5,6,8,33,44,67};
//     printf("Enter the number: \n");
//     scanf("%d", &num);

//     printf("stored element in array are : \n");
//     for (int i = 0; i < num; i++)
//     {
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }
    
//    // number to be searched
//    printf("entered element to be serached: ");
//    scanf("%d", &key);
//         for (int i = 0; i < num; i++)
//         {
//             if (num==key)
//             { 
//                 return 1;
//             }
//         }
//         if(num == key){
//                 printf("element is found in array");
//         }
//     return 0;
// }


#include <stdio.h>

#define MAX_SIZE 100  // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int size, i, toSearch, found,pos;

    /* Input size of array */
    printf("Enter size of array: ");
    scanf("%d", &size);

    /* Input elements of array */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        
    }

    printf("\nEnter element to search: ");
    scanf("%d", &toSearch);

    /* Assume that element does not exists in array */
    found = 0; 
    
    for(i=0; i<size; i++)
    {
        /* 
         * If element is found in array then raise found flag
         * and terminate from loop.
         */
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

    /*
     * If element is not found in array
     */
    if(found == 1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }


    
 printf("\n\nEnter which new element you want to insert: \n");
 scanf("%d",&size);
 
 //Accept position to insert new element
 printf("\nEnter the position to insert new element: \n");
 scanf("%d",&pos);
 
 
 for(i=0;i<size;i++)
 {
  if(i+1==pos)
  {
   arr[pos-1]=size;
  }
 }
 
 //Print Output
 printf("Final Output: \n");
 for(i=0;i<size;i++)
 {
 printf("%d\n",arr[i]);
 }


    return 0;
}


