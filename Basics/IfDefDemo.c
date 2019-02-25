#include <stdio.h>

int main()
{
	#ifdef ME
		printf("Sam Paul\n");
	#endif

	#ifdef HIM
		printf("Tiger Beetle\n");
	#endif
	return 0;
}
