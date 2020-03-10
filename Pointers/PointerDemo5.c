#include <stdio.h>

int main()
{
	int num = 0;
	int *pnum = &num;
	printf("Enter a number 	: ");
	scanf("%d",pnum);
	printf("Value of num is %d\n",num);
	return 0;
}
