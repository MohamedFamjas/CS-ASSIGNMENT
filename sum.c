#include<stdio.h>
#include<math.h>
void main()
{ 
  int n,sum,a,b;
  printf("enter 2 digit number");
  scanf("%d",&n);
  a=floor(n/10);
  printf("%d \n",a);
  b=(n%10);
  printf("%d \n",b);
  sum=a+b;
  printf("%d",sum);
} 
