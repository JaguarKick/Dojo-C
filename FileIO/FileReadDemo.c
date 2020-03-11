#include <stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("World.txt","r");
	if(fp==NULL)
	{
		perror("File does not exist.");
		return(-1);
	}
	int data = 0;
	while((data=fgetc(fp))!=EOF)
	{
		printf("%c",data);
	}
	printf("\n");
	fclose(fp);
	fp = NULL;
	return 0;
}
