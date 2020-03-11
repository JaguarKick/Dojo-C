#include <stdio.h>

int main()
{
	int num[5] = {83,37,48,88,15};
	int *ptrNum = num;
	
	for(int i=0;i<5;i++) {
		printf("%d\n",ptrNum[i]);
		printf("%d\n",*(ptrNum+i)); //Another way to do it..
	}
	return 0;
}
