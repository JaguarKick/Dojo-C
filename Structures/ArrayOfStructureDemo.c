#include <stdio.h>

struct Student
{
	char name[20];
	int rollNo;
}stud[5];

int main()
{
	char temp;
	for(int i=0;i<5;i++)
	{
		printf("Name		: ");
		scanf("%[^\n]s",&stud[i].name);
		printf("Roll No		: ");
		scanf("%d",&stud[i].rollNo);
		scanf("%c",&temp);
	}

	for(int i=0;i<5;i++)
	{
		printf("Name		: %s.\n",stud[i].name);
		printf("Roll No		: %d.\n",stud[i].rollNo);
	}
	return 0;
}
