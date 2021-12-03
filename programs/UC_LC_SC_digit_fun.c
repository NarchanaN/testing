#include<stdio.h>
void UPLCSC();

void UCLCSC()
{
   int x;
   char ch;
   printf("enter a charector\n");
   scanf("%c",&ch);
        
    if(ch>='A' && ch<='Z')
          printf("upercase..\n");
    else if(ch>='a' && ch<='z')
          printf("lowercase..\n");
    else if(ch>='0' && ch<='9')
          printf("this is a digit..\n");
    else
          printf("special charector..\n");
}
void main()
{
    UCLCSC();
}