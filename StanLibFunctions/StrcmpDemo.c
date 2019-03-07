#include <stdio.h>
#include <string.h>

int main()
{
	char name1[] = "Sam Paul";
	char name2[] = "Sam Paul";
	char name3[] = "sam paul";

	if(strcmp(name1,name2)!=0)
	{
		printf("Name1 and Name2 are not same.\n");
	}
	else
	{
		printf("Name1 and Name2 are same.\n");
	}

	if(strcmp(name1,name3)!=0)
	{
		printf("Name1 and Name3 are not same.\n");
	}
	else
	{
		printf("Name1 and Name3 are same.\n");
	}
	return 0;
}
