#include<stdio.h>
void main()
{
 int num,d,ori;
 printf("enter a number");
 scanf("%d",&num);
 ori=num;
 while(num!=0)
 {
  d=num%10;
  printf("%d",d);
  num=num/10;
 }
 if(ori==d)
 {
  printf("it is palindrome");
 }
 else
 {
  printf("it is not palindrome");
 }
}
