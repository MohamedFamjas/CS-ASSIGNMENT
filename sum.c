#include <stdio.h>
int main() 
{
 int count = 0,sum = 0, i;
 for (i = 101; i < 200; i++) 
 {
   if (i % 7 == 0) 
   {
    count++;    
    sum += i;   
   }
 }

    printf("Number of integers: %d\n", count);
    printf("Sum of integers: %d\n", sum);
return 0;
}
