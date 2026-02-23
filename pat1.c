#include<stdio.h>
int main()
{
	int i=1,j=5;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>1;j--)
		{
			printf("%d%d\t",i,j);
		}
		printf("\n");
	}
	return 0;
}
