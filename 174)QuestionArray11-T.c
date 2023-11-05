//Assignment questions in c
// Arrays in c
/*write a program to sort array in descending order*/
/****************************************************
 * statement = sort array in descending order
 * programmer name = taniya yadav
****************************************************/

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a[2][2], b[2][2], r[2][2];
//     int m,n;
//     printf("Enter the element of first matrix: ");
//     for ( m = 0; m <= 1; m++)
//     {
//         for ( n = 0; n <= 1; n++)
//         {
//             scanf("%d", &a[m][n]);
//         }
        
//     }

//     printf("Enter the element of second matrix: ");
//     for ( m = 0; m <= 1; m++)
//     {
//         for ( n = 0; n <= 1; n++)
//         {
//             scanf("%d", & b[m][n]);
//         }
        
//     }

//     for ( m = 0; m <= 1; m++)
//     {
//         for ( n = 0; n <= 1; n++)
//         {
//             r[m][n] = a[m][n] + b[m][n];
//         }
        
//     }
//     printf("Print the addition of two matrix is: ");
//     for ( m = 0; m <= 1; m++)
//     {
//        for ( n = 0; n <= 1; n++)
//        {
//         printf("%d", r[m][n]);
//        }
       
//     }
    
    
//     return 0;
// }
#include <stdio.h>   
int main()  
{  
    int m, n, c, d, first[10][10], second[10][10], sum[10][10];  
    printf("Enter the number of rows and columns of matrix\n");  
    scanf("%d%d", & m, & n);  
    printf("Enter the elements of first matrix\n");  
    for (c = 0; c < m; c++)  
        for (d = 0; d < n; d++) scanf("%d", & first[c][d]);  
    printf("Enter the elements of second matrix\n");  
    for (c = 0; c < m; c++)  
        for (d = 0; d < n; d++) scanf("%d", & second[c][d]);  
    printf("Sum of entered matrices:-\n");  
    for (c = 0; c < m; c++)  
    {  
        for (d = 0; d < n; d++)  
        {  
            sum[c][d] = first[c][d] + second[c][d];  
            printf("%d\t", sum[c][d]);  
        }  
        printf("\n");  
    }  
    return 0;  
}  
