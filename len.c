#include<stdio.h>
#include<string.h>
int main()
{
 char name[100];
 int l;
 printf("enter the string");
 scanf("%[^\n]s",name);
 l=strlen(name);
 printf("length of string is %d",l);
 return 0;
} 
