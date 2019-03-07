#include <stdio.h>

struct Student
{
	char name[20];
	int rollNo;
};

void displayData(struct Student *stud)
{
	printf("Name		: %s\n",stud->name);
	printf("Roll No		: %d\n",stud->rollNo);
}

int main()
{
	struct Student stud;
	printf("Enter name		: ");
	scanf("%[^\n]s",&stud.name);
	printf("Enter roll No		: ");
	scanf("%d",&stud.rollNo);
	displayData(&stud);
	return 0;
}
