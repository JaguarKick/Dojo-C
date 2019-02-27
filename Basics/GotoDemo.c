#include <stdio.h>

int main()
{
	int count = 0;
	startOver:
	if(count==10)
	{
		goto end;
	}
	else
	{
		printf("Hello\n");
		count++;
		goto startOver;
	}
	end:
	return 0;
}
