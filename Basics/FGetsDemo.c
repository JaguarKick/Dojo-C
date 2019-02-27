#include <stdio.h>

int main()
{
	char name[30];
	printf("Enter your name		: ");
	fgets(name,30,stdin);
	printf("My name is %s",name);
	return 0;
}
