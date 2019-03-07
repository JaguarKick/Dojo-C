#include <stdio.h>
#include <string.h>

int main()
{
	char text[] = "Hello World";
	char *ch;
	ch = strchr(text,'l');
	printf("Found : %c.\n",*ch);
	return 0;
}
