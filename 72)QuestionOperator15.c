/* to clear a screen then position the cursor at 10th row and 20th coloumn , and print 
message at the location */
    
#include <stdio.h>
#include <conio.h>
void gotoxy (short int col,short int row)


int main(int argc, char const *argv[])
{
    /* code */
    clear(); /* to clear the screen */
    gotoxy (20,10) /*position the cursor */
    printf("Hello World!");

    return 0;
}


