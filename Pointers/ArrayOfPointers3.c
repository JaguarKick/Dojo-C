#include <stdio.h>

int main()
{
	int num[10] = {45,12,43,98,94,50,72,82,19,62};
	int *ptrNum = num;
	for(int i=0;i<10;i++)
	{
		printf("%d\n",*ptrNum);
		ptrNum++;
	}
}
