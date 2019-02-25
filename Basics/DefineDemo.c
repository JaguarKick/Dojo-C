#define MIN_AGE 18

#include <stdio.h>

int main()
{
	int age;
	printf("Enter your age	: ");
	scanf("%d",&age);
	if(age<MIN_AGE)
		printf("You can't vote.\n");
	else
		printf("You can vote.\n");
	return 0;
}
