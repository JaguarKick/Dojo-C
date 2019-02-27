#include <stdio.h>

int main()
{
	int n1 = 40;
	int n2 = 60;
	int n3 = 90;

	printf("%d, %d, %d.\n",n1,n2,n3);
	printf("%2$d, %3$d, %1$d.\n",n1,n2,n3);
	return 0;
}
