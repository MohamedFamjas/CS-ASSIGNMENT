#include<stdio.h>
int main()
{
	int i,j;
	i=1;
	do
	{
		j=5;
		do
		{
			printf("%d%d\t",i,j);
			j--;
		}
		while(j>1);
		printf("\n");
		i++;
	}
	while(i<=5);
	return 0;
}
