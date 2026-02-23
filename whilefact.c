#include<stdio.h>
int main()
 {
   int n,fact=1,i=1;
   printf("enter number");
   scanf("%d",&n);
   for(i=1;i<=n;i=i+1)
   {
    fact=fact*i;
   }
   printf("%d is factorial of %d",fact,n);
   
   return 0;
 }   
   
