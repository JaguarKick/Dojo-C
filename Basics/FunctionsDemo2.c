#include <stdio.h>

void calc(int n1, int n2)
{
	printf("%d + %d = %d\n",n1,n2,(n1+n2));
}

int main()
{
	calc(45,66);
	calc(12,52);
	calc(34,62);
	return 0;
}

