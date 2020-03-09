#include <stdio.h>

int main()
{
	enum Colors {RED, GREEN, BLUE, BLACK, WHITE, YELLOW, ORANGE, PURPLE};
	enum Colors apple = RED;
	enum Colors spinach = GREEN;
	
	printf("Value of apple		: %d\n",apple);
	printf("Value of spinach	: %d\n",spinach);
	return 0;
}
