#include<stdio.h>
int main()
{
  char c;
  printf("enter the colour: ");
  scanf("%c",&c);
  
  switch(c)
  {
   case 'v':
        printf("the colour is violet");
        break;
   case 'V':
        printf("the colour is violet");
        break;
   case 'i':
        printf("the colour is indigo");
        break;
   case 'I':
        printf("the colour is indigo");
        break;
   case 'b':
        printf("the colour is blue");
        break;                    
   case 'B':
        printf("the colour is blue");
        break;     
   case 'g':
        printf("the colour is green");
        break;
   case 'G':
        printf("the colour is green");
        break;  
   case 'y':
        printf("the colour is yellow");
        break;
   case 'Y':
        printf("the colour is yellow");
        break;
   case 'o':
        printf("the colour is orange");
        break;
   case 'O':
        printf("the colour is orange");
        break;
   case 'r':
        printf("the colour is red");
        break;
   case 'R':
        printf("the colour is red");
        break;               
   default:
        printf("not a vibgyor");
        break;
  }
  return 0;
}        
                                     
