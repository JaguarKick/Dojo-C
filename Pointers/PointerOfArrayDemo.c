#include <stdio.h>

int main()
{
	int num[10] = {11,21,13,14,53,36,37,58,69,70};
	int *ptrNum = num;

	for(int i=0;i<10;i++)
	{
		printf("num[%d] = %d\n",i,ptrNum[i]);
	}
	return 0;
}
