// solve pattern questions.
/*
steps to solve pattern question------->
1] count the rows and columns in pattern question
2] number of lines = number of rows = number of times outer loop will run
3] how many columns are thier in each rows.
   identify fir every row no. how many columns are there or types of element in the
   columns

End of steps.
*/ 
/*

*   
* *
* * *                    question = 1
* * * *
* * * * *
------------------------------------------------
* * * * *
* * * * *
* * * * *           question = 2
* * * * *
* * * * *
-------------------------------------------------
* * * * *
* * * * 
* * * 
* *             question = 3
*
-----------------------------------------------------
1
1 2
1 2 3            question = 4
1 2 3 4
1 2 3 4 5
------------------------------------------------------ 
A
A B
A B C            question = 5
A B C D
A B C D E
---------------------------------------------------------
*
* *
* * *
* * * *
* * * * *       question = 6
* * * *
* * *
* *
*
---------------------------------------------------------------
      * 
     * *
    * * * 
   * * * * 
  * * * * *             question = 7
   * * * * 
    * * *
     * *
      * 
----------------------------------------------------------------- 
        1
      2 1 2 
    3 2 1 2 3              question = 8
  4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5 
------------------------------------------------------------------
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, row, col;
    // int totcolInrow = row > n ? 2 * n - row : row;
    
    // taking input from user
    printf("Enter the number: \n");
    scanf("%d", &n);

    // for loop to find pattern
    /*for (int row = 1; row <= n; row++)
    {
       for ( int col = 1; col <=row ; col++)
        {                                           //question = 1
            printf("* ");
        }
       printf("\n");
    }*/
   
    /*for (int row = 1; row <= n; row++)
    {
        for ( int col = 1; col <=n; col++)
        {                                           //question = 2
            printf("* ");
        }
       printf("\n");
    }*/

    /*for (int row = 1; row <= n; row++)
    {
       for ( int col = 1; col <= n - row + 1; col++)
        {                                           //question = 3
            printf("* ");
        }
       printf("\n");
    }*/

    /*for (int row = 1; row <= n; row++)
    {
       for ( int col = 1; col <= row; col++)
        {                                           //question = 4
            printf("%d", col);
        }
       printf("\n");
    }*/

    /*for (int row = 1; row <= n; row++)
    {
       for ( int col = 1; col <= row; col++)
        {                                           //question = 5
            printf("%c", (char)(col+64));
        }
       printf("\n");
    }*/
    /*for (int row = 1; row <= 2 * n; row++)
    {
       int totcolInrow = row > n ? 2 * n - row : row;
       for ( int col = 1; col <= totcolInrow; col++)
        {                                           //question = 6
            printf("* ");
        }
       printf("\n");
    }*/

    /*for (int row = 1; row <= 2 * n; row++)
    {
       int totcolInrow = row > n ? 2 * n - row : row;

       int noOfspace = n - totcolInrow;

       for(int space= 1; space <= noOfspace; space++)
       {
           printf(" ");
       }
       for ( int col = 1; col <= totcolInrow; col++)
        {                                              //question = 7
            printf("* ");
        }
       printf("\n");
    }*/
    for (int row = 1; row <= n; row++)
    {
        for ( int space = 0; space < n- row; space++)
        {
            printf(" ");
        }  
    

    for ( int col = row; col >=1 ; col--)
    {                                           //question = 8
        printf("col");
    }

    for ( int col = 2; col <=row ; col++)
    {                                           
        printf("col");
    }
    
       printf("\n");
    }

    return 0;
}
