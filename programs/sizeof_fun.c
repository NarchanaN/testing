#include<stdio.h>
void size();

void size()
{
   int i;
   char x;
   float y;
   double z;
   printf("i : sizeof %d\n",sizeof i);
   printf("x : sizeof %d\n",sizeof x);
   printf("y : sizeof %d\n",sizeof y);
   printf("z : sizeof %d\n",sizeof z);
}
void main()
{
    size();
}