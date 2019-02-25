#include <stdio.h>

int main()
{
	int num[10];
	int res=0;
	printf("Enter 10 numbers	: ");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(int i=0;i<10;i++)
	{
		if(num[i] > res)
			res = num[i];
	}
	printf("The largest number is 	: %d\n",res);
	return 0;
}

