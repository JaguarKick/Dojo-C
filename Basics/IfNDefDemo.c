#include <stdio.h>

int main()
{
	#ifndef ME
		printf("Sam is missing.\n");
	#endif

	#ifndef HIM
		printf("Tiger Beetle is missing.\n");
	#endif
	return 0;
}
