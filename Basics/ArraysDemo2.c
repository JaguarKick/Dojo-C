#include <stdio.h>

int main()
{
	int num[5] = {1,2,3,4,5};
	for(int i=0;i<sizeof(num)/sizeof(int);i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}
