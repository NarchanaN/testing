#include<stdio.h>
void reverse();

void reverse()
{
   int n,reverse = 0,x;
   printf("enter a number\n");
   scanf("%d",&n);

   while(n!=0)
   {
       x = n%10;
       reverse = reverse * 10 + x;
       n/=10;
   }
     printf("reversed number = %d",reverse);
}
void main()
{
   reverse();
}


