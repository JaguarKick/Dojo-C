#include <stdio.h>

int main()
{
	int num = 8;
	char chr = 'a';
	int num_arr[10];
	printf("Size of Num is %lu\n",sizeof(num));
	printf("Size of char is %lu\n",sizeof(chr));
	printf("Size of num array is %lu\n",sizeof(num_arr)/sizeof(int));
	return 0;
}
