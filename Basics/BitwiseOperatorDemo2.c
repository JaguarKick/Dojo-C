#include <stdio.h>

int main()
{
	int num1 = 56; // 0111 1000
	int num2 = 12; // 0000 1100
	int res = num1 & num2; // 0000 1000
	printf("Value of res	: %d\n",res);
	return 0;
}
