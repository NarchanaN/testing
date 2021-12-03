#include<stdio.h>
void SI();

void SI()
{
      int principle,SI;
      float rate,time;
    printf("enter principle\n");
    scanf("%d",&principle);
    printf("enter rate\n");
    scanf("%f",&rate);
    printf("enter time\n");
    scanf("%f",&time);
    SI = principle*rate*time/100;
   printf("SI = %d",SI);
}
void main()
{
    SI();
}