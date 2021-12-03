#include<stdio.h>
void areaoftriangle();

void areaoftriangle()
{
   float b,h,area;
   printf("enter the breath of triangle : ");
   scanf("%f",&b);
   printf("enter the hight of triangle : ");
   scanf("%f",&h);
   area = (b*h)/2;

   printf("area of triangle is : %f",area);
   
}
int main()
{
    areaoftriangle();
    return 0;
}