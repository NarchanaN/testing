//c program to print no. of days in a month using switch case//
#include<stdio.h>
void noofday();

void noofday()
{
   while(1)
   {
   int month;
   printf("enter a month (1 to 12)\n");
   scanf("%d",&month);

   switch(month)
   {
     case 1  :printf("january 31 days\n");break;
     case 2  :printf("february 28/29 days\n");break;
     case 3  :printf("march 31 days\n");break;
     case 4  :printf("april 30 days\n");break;
     case 5  :printf("may 31 days\n");break;
     case 6  :printf("june 30 days\n");break;
     case 7  :printf("july 31 days\n");break;
     case 8  :printf("august 31 days\n");break;
     case 9  :printf("september 30 days\n");break;
     case 10 :printf("october 31 days\n");break;
     case 11 :printf("november 30 days\n");break;
     case 12 :printf("december 31 days\n");break;
     default :printf("invalid input! please enter month between january to december..\n");
   }
  }
}
void main()
{
    noofday();
}



