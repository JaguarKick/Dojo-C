#include <stdio.h>

void swap(int *n1, int *n2)
{
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main()
{
	int num1 = 56;
	int num2 = 73;

	printf("Number 1	: %d\n",num1);
	printf("Number 2	: %d\n",num2);
	swap(&num1,&num2);
	printf("After swap.\n");
        printf("Number 1        : %d\n",num1);
        printf("Number 2        : %d\n",num2);
	return 0;
}
