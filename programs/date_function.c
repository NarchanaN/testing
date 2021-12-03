#include<stdio.h>
void date();

void date()
{
   int date,month,year;
   printf("enter a date..\n");
   scanf("%d",&date);
   printf("enter a month..\n");
   scanf("%d",&month);
   printf("enter a year..\n");
   scanf("%d",&year);
   
   if(date<31 && month<12 && year<2050)
   printf("date is vallid..  %d/%d/%d\n",date,month,year);
   else
   printf("date is not vallid..\n");
}
void main()
{
    date();
}




