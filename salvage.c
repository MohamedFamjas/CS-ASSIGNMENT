#include<stdio.h>
void main()
{
  int salvagevalue,purchaseprice,yearofservice,depreciation;
  printf("purchaseprice,yearofservice,depreciation");
  scanf("%d,%d,%d",&purchaseprice,&yearofservice,&depreciation);
  salvagevalue=((purchaseprice)-(depreciation*yearofservice));
  printf("%d",salvagevalue);
}  
