#include <stdio.h>
#include <string.h>

int main()
{
	char text[100] = "this is a - simple text -. This is - the end of the - text.";
	char *token;
	const char search[2] = "-";
	
	printf("Text is 	: %s\n",text);
	token = strtok(text,search);
	
	while(token!=NULL)
	{
		printf("%s\n",token);
		token = strtok(NULL,search);
	}
	return 0;
}
