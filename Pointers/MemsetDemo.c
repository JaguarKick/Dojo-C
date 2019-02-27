#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
	char str[50] = "Hello World";
	printf("\nBefore Memset the text is 	: %s.\n",str);
	memset(str + 11,'*',38*sizeof(char));
	printf("\nAfter Memset the text is 	: %s.\n",str);
}

