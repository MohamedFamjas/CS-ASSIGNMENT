#include<math.h>
#include<stdio.h>
void main()
{
  double eoq,tbo,dr,sc,hc;
  printf("demand rate,setup cost, holding cost per item per unit time");
  scanf("%lf,%lf,%lf",&dr,&sc,&hc);
  eoq=sqrt((2*dr*sc)/(hc));
  tbo=sqrt((2*sc)/(dr*hc));
  printf("eoq is:%lf",eoq);
  printf("tbo is:%lf",tbo);
 }
 //famjas 25022295
 
