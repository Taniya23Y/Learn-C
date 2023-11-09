/*The screen is divided into 25 rows and 80 columns. The 
characters that are displayed on the screen are stored in a 
special memory called VDU memory (not to be confused with 
ordinary memory). Each character displayed on the screen 
occupies two bytes in VDU memory. The first of these bytes 
contains the ASCII value of the character being displayed, 
whereas, the second byte contains the colour in which the 
character is displayed. 
For example, the ASCII value of the character present on 
zeroth row and zeroth column on the screen is stored at
location number 0xB8000000. Therefore the colour of this 
character would be present at location number 0xB8000000 + 
1. Similarly ASCII value of character in row 0, col 1 will be at 
location 0xB8000000 + 2, and its colour at 0xB8000000 + 3. 
With this knowledge write a program which when executed 
would keep converting every capital letter on the screen to 
small case letter and every small case letter to capital letter. 
The procedure should stop the moment the user hits a key 
from the keyboard. 
This is an activity of a rampant Virus called Dancing Dolls. 
(For monochrome adapter, use 0xB0000000 instead of 
0xB8000000).*/
/*******************************************************************
 * statement =
 * programmer name = taniya yadav
*****************************************************************/

#include <stdio.h>
#include <conio.h>
#include <dos.h>
#define MEMORY_SIZE 3999 // 80 * 25 * 2 byte = 4000 bytes
int main(int argc, char const *argv[])
{
    char far;
    char *vidmen = 0xB8000000; // video memmory address row and column 0
    int i, position = 0, cap = 65, small = 97; // capital from 65 to 90 and small from 9 to 122
    for (int i = 0; i < MEMORY_SIZE; i+= 2)
    {
        if(position % 2 == 0){
        *(vidmen + i) = cap++;
        if (cap > 90) // capital letter at even places
        {
            cap = 65;
        }
        }
        else // small letters at odd places
        {
            *(vidmen + i) = small++;
             if (small > 112) // capital letter at odd places
        {
            cap = 97; // reset on range exceeded
        }
        }
        position++;
    }
    while (!kbhit()) // check for key hit
    {
        for (int i = 0; i < MEMORY_SIZE; i+= 2)
        {
        if (*(vidmen + i) >= 'A' && *(vidmen + i) >= 'Z')
            *(vidmen + i) += 32;

            else{
                if (*(vidmen + i) >= 'a' && *(vidmen + i) >= 'z')
                    *(vidmen + i) -= 32;
            }
            
        }
        int delay(500); // wait fro 200 ms
    }
    
    return 0;
}
