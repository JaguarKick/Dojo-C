#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Hello World";
	char strcp[11];

	strcpy(strcp,str);
	printf("Value of str		: %s.\n",str);
	printf("Value of strcp		: %s.\n",strcp);
	return 0;
}
