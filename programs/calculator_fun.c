#include<stdio.h>
void calculator();

void calculator()
{
   int a,b;
   char y;
   printf("Enter any sign for calculation..\n 1 Enter '+' for addition..\n 2 Enter '-' for substraction..\n 3 Enter '*' for multiplication..\n 4 Enter '/' for division..\n");
   scanf("%c",&y);
   switch(y)
   {
     case '+':printf("enter two no for addition\n");
              scanf("%d%d",&a,&b);
              printf("addition=%d",a+b);break;
     case '-':printf("enter two no for substraction\n");
              scanf("%d%d",&a,&b);
              printf("substraction=%d",a-b);break;
     case '*':printf("enter two no for multiplication\n");
              scanf("%d%d",&a,&b);
              printf("multiplication=%d",a*b);break;
     case '/':printf("enter two no for division\n");
              scanf("%d%d",&a,&b);
              printf("division=%d",a/b);break;
     default :printf("invalid input");
    }
}
void main()
{
   calculator();
}