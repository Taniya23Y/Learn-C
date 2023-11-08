/* Two - dimensional Array */
 #include <stdio.h>
int main( )
{
    int  i, j;
    //declaring and intializing array
    int arr[2][2] = {10,20,30,40};
    /*Above array can be initailized as below also
       
    arr[0][0] = 10;
    arr[0][1] = 20;
    arr[1][0] = 30;
    arr[1][1] = 40;
    */

   // for loop
   for (int i = 0; i < 2; i++)
   {
     for (int j = 0; j < 2; j++)
     {
        //accessing variables
        printf("value of arr[%d][%d] : %d\n",i,j,arr[i][j]);
     }
     
   }
   
    return 0;
}
