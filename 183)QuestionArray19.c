/*write a program to prepare a function and pass array as an argument an display
 numbers in ascending order and descending order as per users choice.*/
 /***************************************************************
  * statment =  to prepare a function and pass array as an argument an display
                numbers in ascending order and descending order as per users choice
  * programmer name = taniya yadav
  *********************************************************************/

 #include <stdio.h>

 // function declaration
 int Ascending_Order(int arr[],int num);
 int Descending_Order(int arr[],int num);

 // main function
 int main(int argc, char const *argv[])
 {
    int num;
    int arr[10] = {22,21,56,76,45,33,2,0,67,5};

    // taking input from user 
    printf("Enter the number : \n");
    scanf("%d", &num);
    
    printf("stored array are : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // function call 
    int ascend = Ascending_Order(arr,10);
    int descend = Descending_Order(arr,10);

    return 0;
 }

 // function Ascending_Order definition
 int Ascending_Order(int arr[],int num){

     int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }

     printf("\nElements of array in sorted ascending order:\n");
       for(int i = 0; i < 10; i++)
       {
            printf("%d  ", arr[i]);
       }
	        printf("\n\n");
 }  

// functon Descending_Order definition
int Descending_Order(int arr[],int num)
{
  int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

     printf("\nElements of array in sorted descending order:\n");
       for(int i = 0; i < 10; i++)
       {
            printf("%d  ", arr[i]);
       }
	        printf("\n\n");
}
 
 