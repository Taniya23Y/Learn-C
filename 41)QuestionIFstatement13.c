/* write a program that accepts three digit number from user and find which one is
 greatest number .*/
/*****************************************************************
 * statement = find greatest digit number
 * programmer name = taniya yadav
******************************************************************/

#include<stdio.h>
int main()
{
	// int num, r, g=0;
	
	// printf("enter three digit number: ");
	// scanf("%d\n", &num);

    // while(num!=0)
    // {
    //      r = num % 10;
    //     if(r>1)
    //     g = r;
    //     num = num / 10;
    // }
	  
    //    printf("%d is greatest three digit number.", num);

    int a,b,c;
    printf("Enter the digit\n a, b, c : ");
    scanf("%d %d %d", &a,&b,&c);

    // logoc to find greatest number among three numbers
    if(a>b)
    {
        if(a>c)
        {
             printf("%d is the greatest number among three number", a);
        }
        else{
             printf("%d is the greatest number among three number", c);
        }
    }
    else{
        if (b>c)
        {
             printf("%d is the greatest number among three number", b);
        }
        else 
        {
             printf("%d is the greatest number among three number", c);
        }
        
    }

return 0;
	
}