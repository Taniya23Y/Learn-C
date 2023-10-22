/*If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits. 
(Hint: Use the modulus operator ‘%’)? */
/*******************************************************************
 statement = sum of given digit
 programmer name = taniya yadav
********************************************************************/

#include <stdio.h>

int main()
{

 int num,a,b,c,d,e;

	printf("Enter a five digit number : ");
	scanf("%d", &num);

	e=num%10;
	d=(num/10)%10;
	c=(num/100)%10;
	b=(num/1000)%10;
	a=(num/10000);

	printf("%d is the sum of the digits of the number %d.", a+b+c+d+e, num);
	return 0;

}