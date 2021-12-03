#include<stdio.h>
void evenodd();

void evenodd()
{
   int num;
   printf("enter a number..\n");
   scanf("%d",&num);
   if(num % 2 == 0)
   {
       printf("nuber is even..\n");
   }
   else
      printf("number is odd..\n");
}
void main()
{
   evenodd();
}