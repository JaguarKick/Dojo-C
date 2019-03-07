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
	printf("Name            : %s.\n",stud.name);
	printf("Roll No		: ");
	scanf("%d",&stud.rollNo);
	printf("Roll No         : %d.\n",stud.rollNo);
	printf("Average Score	: ");
	scanf("%f",&stud.score);
	printf("Score           : %f.\n",stud.score);
	
	return 0;
}
