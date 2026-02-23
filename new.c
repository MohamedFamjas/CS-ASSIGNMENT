#include<math.h>
#include<stdio.h>
void main()
{
   double a,b,c,s;
   double area;
   printf("enter a,b,c");
   scanf("%lf,%lf,%lf",&a,&b,&c);
   s=(a+b+c)/2;
   area=sqrt((s)*(s-a)*(s-b)*(s-c));
   printf("%lf",area);
}   
   
