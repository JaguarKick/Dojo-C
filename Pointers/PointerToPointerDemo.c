#include <stdio.h>

int main()
{
	int num = 45;
	int *ptr;
	ptr = &num;
	int **ptrptr;
	ptrptr = &ptr;

	printf("Address of num 		: %x\n",&num);
	printf("Value of num		: %d\n",num);
	printf("Address of ptr		: %x\n",&ptr);
	printf("Value of ptr		: %x\n",ptr);
	printf("Value of *ptr		: %d\n",*ptr);
        printf("Address of ptrptr       : %x\n",&ptrptr);
        printf("Value of ptrptr         : %x\n",ptrptr);
        printf("Value of **ptrptr       : %d\n",**ptrptr);
	return 0;
}

