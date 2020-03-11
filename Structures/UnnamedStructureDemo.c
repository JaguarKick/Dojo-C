#include <stdio.h>

int main()
{
	struct
	{
		int day;
		int month;
		int year;
	}today;
	today.day = 11;
	today.month = 3;
	today.year = 2020;
	
	printf("Date today is %d/%d/%d",today.day,today.month,today.year);
	return 0;
}
