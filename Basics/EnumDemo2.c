#include <stdio.h>

int main()
{
	enum Colors {RED, GREEN, BLUE=3, BLACK, WHITE, YELLOW=22, ORANGE, PURPLE};
	
	enum Colors apple = RED;
	enum Colors spinach = GREEN;
	enum Colors charcoal = BLACK;
	enum Colors eggPlant = PURPLE;
	
	printf("Value of apple		: %d\n",apple);
	printf("Value of spinach	: %d\n",spinach);
	printf("Value of Egg Plant	: %d\n",eggPlant);
	printf("Value of Charcoal	: %d\n",charcoal);
	return 0;
}
