#include<stdio.h>
int main()
{
  int a,b,c,percentage;
  float total;
  printf("enter mark1,mark2,mark3");
  scanf("%d,%d,%d",&a,&b,&c);
  total=a+b+c;
  percentage=(((a+b+c)*100)/300);
  printf("total mark is %f\n percentage of mark is %d\n",total,percentage);
  if(percentage>=90)
   {
     printf("grade is A");
   }
  else if(percentage>=80)
   {
     printf("grade is B");
   }
  else if(percentage>=70)
   {
     printf("grade is C");
   }
  else if(percentage>=60)
   {
     printf("grade is D");
   }
  else if(percentage>=50)
   {
     printf("grade is E");
   }
  else
   {
     printf("FAIL");
   }     
  
  return 0;
}  
