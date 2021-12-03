#include<stdio.h>
void table();

void table()
{
   int i,num;
   printf("enter a number to print a table\n");
   scanf("%d",&num);

   for(i=1;i<=10;i++)
   {
       printf(" %d * %d = %d\n",num,i,(num*i));
   }
}
void main()
{
    table();
}
