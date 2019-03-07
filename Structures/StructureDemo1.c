#include <stdio.h>

struct Student
{
	char name[20];
	int rollNo;
}stud;

int main()
{
	printf("Enter your name 	: ");
	scanf("%[^\n]s",&stud.name);
	printf("Enter your roll no	: ");
	scanf("%d",&stud.rollNo);

	printf("Name	: %s.\n",stud.name);
	printf("Roll No	: %d.\n",stud.rollNo);
	return 0;
}

