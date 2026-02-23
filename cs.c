#include <stdio.h>
int main()
{
int nmbr1,nmbr2,nmbr3;
printf("Enter the first number: ");
scanf("%d",&nmbr1);
printf("Enter the second number: ");
scanf("%d",&nmbr2);
printf("Enter the third number: ");
scanf("%d",&nmbr3);
if(nmbr1>nmbr2)
  {
  if (nmbr1>nmbr3)
  printf("%d is greatest numbr",nmbr1);
  }
else if(nmbr2>nmbr1)
  {
  if(nmbr2>nmbr3)
  printf("%d is greatest numbr",nmbr2);
  }
else
  {
  printf("%d is greatest numbr",nmbr3);
  }
return 0;
}
