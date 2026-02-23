#include<stdio.h>
int main()
 {
   int n,fact=1,i=1;
   printf("enter number");
   scanf("%d",&n);
   do 
   {
    fact=fact*i;
    i=i+1;
   }
   while(i<=n);
   printf("%d is factorial of %d",fact,n);
   
   return 0;
 }   
