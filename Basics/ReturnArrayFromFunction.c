#include <stdio.h>

int * getNum()
{
	static int num[10] = {1,2,3,4,5,6,7,8,9,10};
	return num;
}


int main()
{
	int *num;
	num = getNum();
	for(int i=0;i<10;i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}
