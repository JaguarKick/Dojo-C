#include <stdio.h>

int main()
{
	int num1 = 56; // 0011 1000
	int num2 = 12; // 0000 1100
	int res = ~num1; // 11000111
	printf("Value of res	: %d\n",res);
	return 0;
}
