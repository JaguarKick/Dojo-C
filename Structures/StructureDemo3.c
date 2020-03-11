#include <stdio.h>

struct date
{
	int dd;
	int mm;
	int yyyy;
};

struct time
{
	int hh;
	int mm;
	int ss;
};

struct rightNow
{
	struct date dt;
	struct time tt;
};

int main()
{
	struct rightNow today = {{11,3,2020},{11,19,18}};
	printf("Time right now is %d/%d/%d, %d:%d:%d.\n",today.dt.dd,today.dt.mm,today.dt.yyyy,today.tt.hh,today.tt.mm,today.tt.ss);
	return 0;
}
