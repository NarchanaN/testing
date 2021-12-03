#include<stdio.h>
void vovelconsonant();

void vovelconsonant()
{
   char A,E,I,O,U,x,y;
   printf("enter a charector..\n");
   scanf("%d",&x);
   if(y==A || y==E || y==I || y==O || y==U)
   {
       printf("charector is vovel..\n");
   }
   else 
        printf("charector is consonant..\n");
}
void main()
{
    vovelconsonant();
}