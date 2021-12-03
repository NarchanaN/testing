#include<stdio.h>
void voting();

void voting()
{   
    int a;
    printf("enter an age\n");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("voting eligibility..\n");
    }
    else
       printf("not eligible\n");
}
void main()
{
    voting();
}