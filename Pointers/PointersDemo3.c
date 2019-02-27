#include <stdio.h>

int main()
{
	int num = 45;
	int *ptrNum = &num;
	printf("Value of num		%d.\n",num);
	printf("Value of ptrNum		%d.\n",*ptrNum);
	*ptrNum = 100;
	printf("Value of num            %d.\n",num);
        printf("Value of ptrNum         %d.\n",*ptrNum);
	return 0;
}
