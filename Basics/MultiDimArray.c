#include <stdio.h>

int main()
{
	int num[4][4] = 
	{
		{4,5,6,1},
		{8,4,2,7},
		{9,1,6,2},
		{6,3,6,2}
	};

	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
