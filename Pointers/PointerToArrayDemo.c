#include <stdio.h>

int main()
{
	int num[10] = {1,2,3,4,5,6,7,8,9,10};
	int *ptrNum = num;

	for(int i=0;i<10;i++)
	{
		printf("%d.\n",ptrNum[i]);
	}
	return 0;
}
