#include <stdio.h>

int add(int n1,int n2);
int sub(int n1,int n2);
int mul(int n1,int n2);
float div(int n1, int n2);
int mod(int n1,int n2);

int main()
{
	int n1,n2;
	printf("Enter number 1 : ");
	scanf("%d",&n1);
	printf("Enter number 2 : ");
	scanf("%d",&n2);
	printf("%d + %d = %d\n",n1,n2,add(n1,n2));
	printf("%d - %d = %d\n",n1,n2,sub(n1,n2));
	printf("%d - %d = %d\n",n1,n2,mul(n1,n2));
	printf("%d / %d = %f\n",n1,n2,div(n1,n2));
	printf("%d / %d = %d\n",n1,n2,mod(n1,n2));
	return 0;
}

int add(int n1, int n2)
{
	return n1+n2;
}

int sub(int n1,int n2)
{
	return n1-n2;
}

int mul(int n1,int n2)
{
	return n1*n2;
}

float div(int n1,int n2)
{
	return (float)n1/(float)n2;
}

int mod(int n1, int n2)
{
	return n1%n2;
}

