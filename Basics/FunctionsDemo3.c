#include <stdio.h>

int add(int n1, int n2)
{
	return n1+n2;
}

int sub(int n1,int n2)
{
	return n1-n2;
}

int mult(int n1, int n2)
{
	return n1*n2;
}

float div(int n1, int n2)
{
	return (float)n1/(float)n2;
}

int main()
{
	int n1=45,n2=63;
	printf("%d\n",add(n1,n2));
	printf("%d\n",sub(n1,n2));
	printf("%d\n",mult(n1,n2));
	printf("%f\n",div(n1,n2));
	return 0;
}
