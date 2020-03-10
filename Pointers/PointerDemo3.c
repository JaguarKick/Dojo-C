#include <stdio.h>

int main()
{
	int num = 10;
	int *pnum = &num;
	printf("Address of num is 	: %p\n",pnum);
	return 0;
}
