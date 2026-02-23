#include<stdio.h>
int main()
 {
   int n,fact=1,i=1;
   printf("enter number");
   scanf("%d",&n);
   while(i<=n)
   {
    fact=fact*i;
    i=i+1;
   }
   printf("%d is factorial of %d",fact,n);
   
   return 0;
 }   
   
