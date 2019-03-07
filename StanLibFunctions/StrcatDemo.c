#include <stdio.h>
#include <string.h>

int main()
{
	char firstName[] = "Sam";
	char lastName[] = "Paul";
	char name[8];
	strcat(name,firstName);
	strcat(name," ");
	strcat(name,lastName);
	printf("Name is 	: %s.\n",name);
	return 0;
}
