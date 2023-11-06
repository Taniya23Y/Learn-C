/*Passing array element in function*/
/*call by value*/
#include <stdio.h>
int display(int m);
int main(int argc, char const *argv[])
{
    int i;
    int marks[] = {50,56,78,90,34,23};
    // loop
    for (int i = 0; i < 6; i++)
    {
        display(marks[i]);
    }
    
    return 0;
}

int display(int m){
    printf("%d ", m);
}