#include <stdio.h>

struct Student
{
	char name[20];
	int rollNo;
};

void displayData(struct Student stud)
{
	printf("Name		: %s.\n",stud.name);
	printf("Roll No		: %d.\n",stud.rollNo);
}

int main()
{
	struct Student stud;
        printf("Enter your name         : ");
        scanf("%[^\n]s",&stud.name);
        printf("Enter your roll no      : ");
        scanf("%d",&stud.rollNo);
	displayData(stud);
	return 0;	
}
