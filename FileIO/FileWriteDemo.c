#include <stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("Test.txt","w+");
	fprintf(fp,"This is a simple test.\n");
	fputs("This is another test.\n",fp);
	fclose(fp);
}
