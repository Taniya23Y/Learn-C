/* write a program that accepts three digit number from user and find which one is
 greatest number .*/
/*****************************************************************
 * statement = find greatest digit number
 * programmer name = taniya yadav
******************************************************************/

#include<stdio.h>
int main()
{
	int num, r, g=0;
	
	printf("enter three digit number: ");
	scanf("%d\n", &num);

    while(num!=0)
    {
         r = num % 10;
        if(r>1)
        g = r;
        num = num / 10;
    }
	  
       printf("%d is greatest three digit number.", num);
return 0;
	
}