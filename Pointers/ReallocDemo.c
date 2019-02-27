#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	int num;
	int sum = 0;

	printf("Enter the number of inputs	: ");
	scanf("%d",&num);

	ptr = (int*)calloc(num,sizeof(int));
	printf("Enter %d numbers\n",num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&ptr[i]);
	}

	for(int i=0;i<num;i++)
	{
		sum = sum + ptr[i];
	}
	printf("Sum = %d.\n",sum);

	printf("Enter the number of inputs      : ");
        scanf("%d",&num);
	ptr = (int*)realloc(ptr,num*sizeof(int));

	 printf("Enter %d numbers\n",num);
        for(int i=0;i<num;i++)
        {
                scanf("%d",&ptr[i]);
        }

        for(int i=0;i<num;i++)
        {
                sum = sum + ptr[i];
        }
        printf("Sum = %d.\n",sum);

	free(ptr);
	return 0;
}
