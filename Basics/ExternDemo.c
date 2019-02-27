#include <stdio.h>

int globalNum = 20;

void displayNum1();
void displayNum2();

int main()
{
	displayNum1();
	displayNum2();
	return 0;
}

void displayNum1()
{
	int globalNum = 50;
	printf("I'm in displayNum1 function. Value of globalNum is %d.\n",globalNum);
}

void displayNum2()
{
	extern int globalNum;
	printf("I'm in the displayNum2 funtion. Value of globalNum is %d.\n",globalNum);
}

