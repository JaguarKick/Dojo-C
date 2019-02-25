#include <stdio.h>

int main()
{
	char name[20];
	int age;
	printf("Please enter your name followed by age...\n");
	scanf("%[^\n]s",&name);
	scanf("%d",&age);
	printf("Hello %s. You're %d years old.\n",name,age);
	return 0;
}
