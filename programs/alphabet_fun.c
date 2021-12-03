#include<stdio.h>
void alphabet();

void alphabet()
{
   char ch;
   printf("enter a charector\n");
   scanf("%c",&ch);
   if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
   {
       printf("this is a alphabet\n");
   }
   else
       printf("this is not a alphabet\n");
}
void main()
{
    alphabet();
}

   


