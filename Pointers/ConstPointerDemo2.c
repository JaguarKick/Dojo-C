#include <stdio.h>

int main()
{
	int num1 = 34;
	int num2 = 11;
	const int *pnum1 = &num1;
	int *const pnum2 = &num2; // This is illegal. You can't change the value of pointer itself.
	pnum1 = &num2;
	pnum2 = &num1;
	printf("Value of pnum1		: %d\n",*pnum1);
	printf("Value of pnum2		: %d\n",*pnum2);
	return 0;
}
