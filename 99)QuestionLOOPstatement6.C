/*write a program to accepts n number from user and calculate maximum and 
minimum value.*/
/*****************************************************
 * statement = n number from user and calculate maximum and minimum value.
 * programmer name = taniya yadav
**************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, max = 0, min = 0;
    char answer;


    while(answer != 'n')
    {
        for(int i = 0; i < 100; i++){
        printf("Enter Number:");


        if (scanf("%d", &num) == 1)
        {
        if(num == 0)  //check if the input value is 0 then break the loop
            break;
        else
            {
                if(num > max)
                max = num;

                if(num < min)
                min = num;
            }
        }
    }


        printf("lowest: %d, highest: %d", min, max);


        printf("\nWould you like to start over? (j/n): ");
        scanf("%s", &answer);


        max = 0;
        //min=0;


        if(answer == 'n')
            break;
    }
    return 0;
}
