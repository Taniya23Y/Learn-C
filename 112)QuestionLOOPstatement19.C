/*Write a program to find the factorial value of any number 
entered through the keyboard.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num, i=1,f=1;
	printf("Enter a number:\n");
	scanf("%d", &num);
	// loop 
	while (i<=num)
	{
		f = f*i;
		i++;
	}
	   printf("%d is the factorial of %d.", f, num);
	return 0;
}
