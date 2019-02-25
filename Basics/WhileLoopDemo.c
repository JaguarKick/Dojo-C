#include <stdio.h>

int main()
{
	int stopNum;
	int i=1;
	printf("Enter the number where you want your loop to stop 	: ");
	scanf("%d",&stopNum);
	while(i<=stopNum)
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}
	
