#include <stdio.h>

int main()
{
	int num1 = 56; // 0011 1000
	int num2 = 12; // 0000 1100
	int res = num1 ^ num2; // 0011 0100
	printf("Value of res	: %d\n",res);
	return 0;
}
