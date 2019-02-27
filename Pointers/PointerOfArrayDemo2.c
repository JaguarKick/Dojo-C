#include <stdio.h>

int main()
{
	int num[14] = {45,6,4,745,32,53,656,34,64,3,64,64,23,633};
	int *ptrNum = num;
	for(int i=0;i<14;i++)
	{
		ptrNum[i] = ptrNum[i]+4;
	}

	for(int i=0;i<14;i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}
