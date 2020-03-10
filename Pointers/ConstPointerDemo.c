#include <stdio.h>

int main()
{
	int num = 22;
	const int *pnum = &num;
	printf("Value of num	: %d\n",num);
	num = 67;
	printf("Value of pnum	: %d\n",*pnum);
	*pnum = 11; // this is illegal.
	return 0;
}
