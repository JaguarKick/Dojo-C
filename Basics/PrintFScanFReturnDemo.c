#include <stdio.h>

int main()
{
	int n1,n2,n3;
	int count = printf("Hello World, I've been waiting for the chance to see your face.\n");
	printf("Number of characters printed is %d.\n",count);
	count = scanf("%d%d%d",&n1,&n2,&n3);
	printf("Number of inputs were : %d.\n",count);
	return 0;
}
