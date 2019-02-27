#include <stdio.h>

int main()
{
	int num = 45;
	int *ptrNum;
	ptrNum = &num;

	printf("Value of num		: %d\n",num);
	printf("Value of ptrNum		: %d\n",*ptrNum);
	
	*ptrNum = 76;
	printf("Changed the value of ptrNum to %d\n",*ptrNum);
	printf("Value of num is now %d\n",num);
	return 0;
}
