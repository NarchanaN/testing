#include<stdio.h>
void leapyear();

void leapyear()
{
    int year;
    printf("enter a year..\n");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("%d is leap year",year);
    }                     
    else
        printf("%d is not a leap year",year);
}
void main()
{
   leapyear();
}