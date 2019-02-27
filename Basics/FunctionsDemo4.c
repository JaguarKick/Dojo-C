#include <stdio.h>

void greet(char name[20])
{
	printf("Hello %s\n",name);
}

int main()
{
	greet("Sam");
	greet("John");
	greet("Mike");
	return 0;
}	
