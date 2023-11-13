// Qiestion

#include <stdio.h>
#include <string.h>
#include <malloc.h>   // using malloc function

int main(){
     
    char *name[6];
    char n[50];
    int len, i;
    char *p;

    // for loop
    for (int i = 0; i <= 5; i++)
    {
        printf("\n Enter your name: ");
        scanf("%s", n);
        len = strlen(n);
        p = malloc(len + 1);
        strcpy(p, n);
        name[i] = p;
    }
    for (int i = 0; i <= 5; i++)
    printf("\n %s", name[i]);
    
    return 0;
}

Explanation:-Here we have first received a name using scanf( ) in a string n[ ]. 
            Then we have found out its length using strlen( ) and allocated 
            space for making a copy of this name. This memory allocation has 
            been done using a standard library function called malloc( ). This 
            function requires the number of bytes to be allocated and returns 
            the base address of the chunk of memory that it allocates. The 
            address returned by this function is always of the type void *. 
            Hence it has been converted into char * using a feature called 
            typecasting. Typecasting is discussed in detail in Chapter 15. The 
            prototype of this function has been declared in the file ‘malloc.h’. 
            Hence we have #included this file.  

            But why did we not use array to allocate memory? This is because 
            with arrays we have to commit to the size of the array at the time 
            of writing the program. Moreover, there is no way to increase or 
            decrease the array size during execution of the program. In other 
            words, when we use arrays static memory allocation takes place. 

            Unlike this, using malloc( ) we can allocate memory dynamically, 
            during execution. The argument that we pass to malloc( ) can be a 
            variable whose value can change during execution.

            Once we have allocated the memory using malloc( ) we have 
            copied the name received through the keyboard into this allocated 
            space and finally stored the address of the allocated chunk in the 
            appropriate element of names[ ], the array of pointers to strings. 
            This solution suffers in performance because we need to allocate 
            memory and then do the copying of string for each name received 
            through the keyboard.
