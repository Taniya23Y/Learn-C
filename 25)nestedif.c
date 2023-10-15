#include<stdio.h>
int main()
{
	int a,b, c;
	
	printf("enter two values: \n");
	scanf("%d %d %d\n",&a,&b,&c);
	
	if (a>b)
	{
		if(a>c)
		{
			printf("block1");
		}
		else
			printf("block 2");
	}
	else
	{
		if(b>a)
		{
			printf("block 3");
		}
		else
		{
			printf("block 4");
		}
	}
	return 0;
}