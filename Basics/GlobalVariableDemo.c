#include <stdio.h>

int num = 10;

int num1()
{
	return num*3;
}

int num2()
{
	return num*5;
}

int main()
{
	printf("%d\n",num1());
	printf("%d\n",num2());
	return 0;
}
