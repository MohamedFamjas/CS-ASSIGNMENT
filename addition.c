#include<stdio.h>
int main()
{
 int a[100][100],b[100][100],m,n,p,q,i,j,c[100][100];
 printf("enter the no.of rows and columns A");
 scanf("%d,%d",&m,&n);
 printf("enter the no.of rows and columns B");
 scanf("%d,%d",&p,&q);
 printf("enter the element of matrixA:\n");
 for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
    {
     scanf("%d",&a[i][j]);
    }
  }
 printf("enter the element of matrixB:\n");
 for(i=0;i<p;i++)
  {
   for(j=0;j<q;j++)
    {
     scanf("%d",&b[i][j]);
    }
  } 
 for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
    {
     printf("%d\n",a[i][j]);
    }
  } 
 for(i=0;i<p;i++)
  {
   for(j=0;j<q;j++)
    {
     printf("%d\n",b[i][j]);
    }
  } 
  if((m==p)&&(n==q))
   {
      for(i=0;i<m;i++)
      {
       for(j=0;j<n;j++)
        {
          c[i][j]=a[i][j]+b[i][j];
   
        }
      }
     printf("resultant matrix ix:\n");
       for(i=0;i<m;i++)
        {
          for(j=0;j<n;j++)
           {
             printf("%d\t",c[i][j]);
           }
           printf("\n");
        }
  }      
 return 0;
}   
