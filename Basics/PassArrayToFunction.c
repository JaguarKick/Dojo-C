#include <stdio.h>

void printNum(int num[10])
{
	for(int i=0;i<10;i++)
	{
		printf("%d\n",num[i]);
	}
}

int main()
{
	int num[10] = {1,2,3,4,5,6,7,8,9,10};
	printNum(num);
	return 0;
}
