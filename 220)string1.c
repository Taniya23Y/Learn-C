/*In what way are character arrays different than numeric arrays?
Can elements in a character array be accessed in the same way as 
the elements of a numeric array? Do I need to take any special care 
of ‘\0’? Why numeric arrays don’t end with a ‘\0’? Declaring 
strings is okay, but how do I manipulate them? Questions galore!! 
Well, let us settle some of these issues right away with the help of 
sample programs.*/
/************************************************************
 * statement = above statement answer (String)
 * programmer name = taniya yadav
**************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char name[] = "Klinsman";
    char *ptr;

    /*  
    int i =0;
    while (i <= 7)                   
    {                                   
       printf("%c", name[i]); 
       i++;
    }*/

    /*
           output is -- Klinsman
    No big deal. We have initialized a character array, and then printed 
    out the elements of this array within a while loop. Can we write 
    the while loop without using the final value 7? We can; because 
    we know that each character array always ends with a ‘\0’. 
    Following program illustrates this.*/

   /*
    int i = 0;    
    while(name[i] != '\0'){

        printf("%c", name[i]);
        i++;
    }*/

   /*
         output is -- Klinsman
    This program doesn’t rely on the length of the string (number of 
    characters in it) to print out its contents and hence is definitely 
    more general than the earlier one. Here is another version of the 
    same program; this one uses a pointer to access the array elements.
   */

    ptr = name;/*store base address of the string*/

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
    }
    ptr++;

    /*Nothing will print.!!*/
    return 0;
}
