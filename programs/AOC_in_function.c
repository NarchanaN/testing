#include<stdio.h>
void AOC();

void AOC()
{
  float area,radius;
  printf("enter the radius of circle\n");
  scanf("%f",&radius);

  area = 3.14*radius*radius;

  printf("area of circle is : %.2f\n",area);
}
void main()
{
    AOC();
}