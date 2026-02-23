#include<stdio.h>
void main()
{
  int a,u,t,speed;
  printf("enter a,u,t");
  scanf("%d,%d,%d",&a,&u,&t);
  speed=(u*t)+(a*t*t)/2 ;
  printf("%d",speed);
}  
