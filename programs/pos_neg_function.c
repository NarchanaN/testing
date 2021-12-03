#include<stdio.h>
void posneg();

void posneg()
{
  int num;
  printf("enter a number..\n");
  scanf("%d",&num);
  if(num > 0)
  printf("number is possitive..\n");
  else if(num < 0)
  {
  printf("number is negative..\n");
  }
  else
  {
  printf("0 is neiter positive nor negative..\n");
  }
}
void main()
{
    posneg();
}