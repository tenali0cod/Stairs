#include<stdio.h>
int main()
{
	int num,i,j;
	printf("Enter the number of stairs you want to build:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("01");
		}
	  printf("\n");
	}
	return 0;
}
