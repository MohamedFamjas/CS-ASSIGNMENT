#include<stdio.h>
int main()
{
  int a[100][100],i,j,m,n;
  printf("enter the no.of row");
  scanf("%d",&m);
   printf("enter the no.of column");
  scanf("%d",&n);
  for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    {
     printf("enter the number");
     scanf("%d",&a[i][j]);
    }
   }
  for(j=0;j<n;j++)
   {
    for(i=0;i<m;i++)
    {
     printf("matrix %d,%d is:%d\n",i,j,a[j][i]);
    }
   }  
   return 0;
}     
