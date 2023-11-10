/*Even though there are so many ways (as shown above) to refer to 
the elements of a character array, rarely is any one of them used. 
This is because printf( ) function has got a sweet and simple way 
of doing it, as shown below. Note that printf( ) doesn’t print the 
‘\0’.

main( ) 
{ 
 char name[] = "Klinsman"; 
 printf("%s", name); 
} 

The %s used in printf( ) is a format specification for printing out a 
string. The same specification can be used to receive a string from 
the keyboard, as shown below. */
/************************************************************
 * statement = above statement answer (String)
 * programmer name = taniya yadav
**************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char name[25];

    /*printf(" Enter your name: ");
    scanf("%s", &name);
    printf("Hello %s!", name); */

    /* output :- Enter your name: Taniya yadav
                 Hello Taniya!
                 
                 remember yadav is not there
                 
    Note that the declaration char name[25] sets aside 25 bytes under 
    the array name[ ], whereas the scanf( ) function fills in the 
    characters typed at keyboard into this array until the enter key is 
    hit. Once enter is hit, scanf( ) places a ‘\0’ in the array. Naturally, 
    we should pass the base address of the array to the scanf( )
    function.             
                 
    */

/******************************************************************************************/
   /*  While entering the string using scanf() we must be cautious about 
       two things: 
(a)The length of the string should not exceed the dimension of 
   the character array. This is because the C compiler doesn’t 
   perform bounds checking on character arrays. Hence, if you 
   carelessly exceed the bounds there is always a danger of 
   overwriting something important, and in that event, you 
   would have nobody to blame but yourselves. 

(b)scanf( ) is not capable of receiving multi-word strings. 
   Therefore names such as ‘Debashish Roy’ would be 
   unacceptable. The way to get around this limitation is by 
   using the function gets( ). The usage of functions gets( ) and 
   its counterpart puts( ) is shown below. */

    printf(" Enter your name: ");
    gets(name);
    puts("Hello");
    puts(name);
    
    /*Explanation: The program and the output are self-explanatory except for 
                   the fact that, puts( ) can display only one string at a time 
                   (hence the use of two puts( ) in the program above). Also, on 
                   displaying a string, unlike printf( ), puts( ) places the cursor 
                   on the next line. Though gets( ) is capable of receiving only
                   one string at a time, the plus point with gets( ) is that it can 
                   receive a multi-word string. 
                   If we are prepared to take the trouble we can make scanf( ) 
                   accept multi-word strings by writing it in this manner: 
                   char name[25] ; 
                   printf ( "Enter your full name " ) ; 
                   scanf ( "%[^\n]s", name ) ; 
                   Though workable this is the best of the ways to call a 
                   function, you would agree.
*/

return 0;
}
