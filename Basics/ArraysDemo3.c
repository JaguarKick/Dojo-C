#include <stdio.h>

int main()
{
	int num[10] = {0};
	
	for(int i=0;i<sizeof(num)/sizeof(int);i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}
