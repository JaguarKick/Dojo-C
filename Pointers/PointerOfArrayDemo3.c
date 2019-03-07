#include <stdio.h>

int main()
{
	int num[] = {12, 23, 34, 45, 56};
	int *ptr;
	ptr = num;
	for(int i=0;i<5;i++)
	{
		printf("Address of num[%d] = %x\n",i,ptr);
		printf("Value of num[%d] = %d\n",i,*ptr);
		ptr++;
	}
	return 0;
}
