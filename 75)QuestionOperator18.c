/*If the marks obtained by a student in five different subjects 
are input through the keyboard, find out the aggregate marks 
and percentage marks obtained by the student. Assume that 
the maximum marks that can be obtained by a student in each 
subject is 100? */

/********************************************************
 statement = aggregate marks and percentage marks 
 programmer name = taniya yadav
*******************************************************/

#include <stdio.h>
 int main()
 {
    int maths, english, hindi, tamil, turkish, arg;
    float pr;

    printf("enter the marks in five subject:%f\n");
    scanf("%d %d %d %d %d:%d\n", &maths, &english, &hindi, &tamil, &turkish);

    /* calculation of aggregate marks and percentage marks */
    
    arg = maths + english + hindi + tamil + turkish;
    pr = arg/5;

    printf("aggregate marks in five subject = %d\n", arg);
    printf("percentage  marks in five subject = %.2f %%\n", pr);
    
    return 0;

 }