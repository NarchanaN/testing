#include<stdio.h>
#include<stdlib.h>
void day();

void day()
{
  int week;

  while(1){
  printf("enter week name 1 to 7\n");
  printf("0 to exit\n");
  scanf("%d",&week);

  
    switch(week)
    {
      case 1 :printf("monday\n");break;
      case 2 :printf("tuesday\n");break;
      case 3 :printf("wednesday\n");break;
      case 4 :printf("thrusday\n");break;
      case 5 :printf("firday\n");break;
      case 6 :printf("saturday\n");break;
      case 7 :printf("sunday\n");break;
      case 0:exit(0);
      default:printf("invalid input..please enter correct week no. (1 to 7)");
    }
  }
}
void main()
{
   day();
}



