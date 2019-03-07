// This sample is going to produce a corrupted output.

#include <stdio.h>

union Student
{
	char name[20];
	int rollNo;
	float score;
};


int main()
{
	union Student stud;

	printf("Name		: ");
	scanf("%[^\n]",&stud.name);
	printf("Roll No		: ");
	scanf("%d",&stud.rollNo);
	printf("Average Score	: ");
	scanf("%d",&stud.score);
	
	printf("Name		: %s.\n",stud.name);
	printf("Roll No		: %d.\n",stud.rollNo);
	printf("Score		: %d.\n",stud.score);
	return 0;
}
