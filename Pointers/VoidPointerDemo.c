#include <stdio.h>

int main()
{
	void *ptr = NULL;
	int num = 34;
	char ch = 'A';
	float fnum = 56.4;

	ptr = &num;
	printf("Value of num		: %d\n",*(int *)ptr);
	ptr = &ch;
	printf("Value of ch		: %c\n",*(char *)ptr);
	ptr = &fnum;
	printf("Value of fnum		: %f\n",*(float *)ptr);
	return 0;
}
