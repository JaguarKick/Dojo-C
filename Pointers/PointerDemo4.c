#include <stdio.h>

int main()
{
	int num = 45;
	int *pnum = &num;
	++*pnum;
	printf("Value of num is %d\n",num);
	return 0;
}
