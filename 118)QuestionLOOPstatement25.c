// exit function
/* DEFINITION-- 1] The exit( ) function is a standard library function which 
terminates the execution of the program. It is necessary to use this function 
since we don't want the statement..
                2] The function exit() will terminate the process that calls the exit
-----> syntax = exit(int value)
-----> uses of exit() = void exit(int status)
-----> parameter = A status value returned to the parent process
-----> Return value = The argumnent status is returned to the host environment.
                      normally you say 1 or higher if something went wrong and 0 if
                      everything went OK.for example exit(0) or exit(1).
-----> break just terimates the current location */
/****************************************************************
 * statement = exit function
 * programmer name = taniya yadav
*****************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*int j;
    //taking input from user
    printf("Enter the bit value 0,1:\n");
    scanf("%d", &j);

    // control statement ---switch 
    switch (j)
    {
    case 0: 
        printf("Bit value is 0\n");
        break;
    
    case 1:
        printf("Bit value is 1\n");
        break;
    
    default:
        printf("Invalid value\n");
        exit(0);
    }

    printf("After switch book\n");*/
    

    int i;
    for (i = 1; i <= 5; i++)
    {
        if(i==4)
        exit(0);
        else
        printf("%d", i);
    }   
return 0;
}
