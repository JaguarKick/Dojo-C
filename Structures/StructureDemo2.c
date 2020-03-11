#include <stdio.h>

int main()
{
	struct Date
	{
		int day;
		int month;
		int year;
	}today;
	today = (struct Date){11,3,2020};
	
	printf("Date today is %d/%d/%d",today.day,today.month,today.year);
	return 0;
}
