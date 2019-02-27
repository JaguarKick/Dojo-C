#include <stdio.h>

int main()
{
	const int num = 10;
	printf("Constant variable num has value : %d",num);
	/*
	ConstDemo.c:7:6: error: assignment of read-only variable ‘num’
  	num = 30;
	*/
	// compilation fails with the error mentioned above.num = 30;
	return 0;
}
