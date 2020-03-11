#include <stdio.h>

void copyString(char *toArr, char *fromArr)
{
	while(*fromArr)
		*toArr++ = *fromArr++;
	*toArr = '\0';
}

int main()
{
	char strText[] = "Hello World, I've been waiting for the chance to see your face.";
	char strCopy[100];
	copyString(strCopy,strText);
	printf("Actual String is : %s\n",strText);
	printf("Copied String is : %s\n",strCopy);
	return 0;
}
