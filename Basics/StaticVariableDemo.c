#include <stdio.h>

void info()
{
	static int num = 0;
	printf("Number is : %d.\n",num);
	num++;
}


int main()
{
	info();
	info();
	info();
	info();
	info();
	info();
	info();
	return 0;
}
