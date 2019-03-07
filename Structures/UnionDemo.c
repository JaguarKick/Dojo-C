#include <stdio.h>

union Student
{
	char name[20];
	int rollNo;
};

int main()
{
	union Student stud;
	printf("Size of Union stud is %d.\n",sizeof(stud));
	return 0;
}
