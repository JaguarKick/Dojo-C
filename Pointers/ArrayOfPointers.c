#include <stdio.h>

int main()
{
	int num[] = {2,3,5,6,7,8,9};
	int *ptr[7];

	for(int i=0;i<7;i++)
	{
		ptr[i] = &num[i];
	}

	for(int i=0;i<7;i++)
	{
		printf("Address of ptr[%d]	: %x.\n",i,ptr[i]);
		printf("Value of *ptr[%d]	: %d.\n",i,*ptr[i]);
	}
	return 0;
}
