#include <stdio.h>

int main()
{
	int num = 45;
	int *ptrNum;
	ptrNum = &num;
 
	printf("Value of num			: %d\n",num);
	printf("Address of num			: %u\n",&num);
	printf("Value of ptrNum			: %u\n",ptrNum);
	printf("Address of ptrNum		: %u\n",&ptrNum);
	printf("Value of *ptrNum		: %d\n",*ptrNum);
	return 0;
}

