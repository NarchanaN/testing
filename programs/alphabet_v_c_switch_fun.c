#include<stdio.h>
void alphabet();

void alphabet()
{
  while(1)
  {
    char ch;
    printf("enter an alphabet\n");
    scanf("%c",&ch);
    getchar();

    switch(ch)
    {
       case 'a' :printf("a is vowel \n");break;
       case 'e' :printf("e is vowel \n");break;
       case 'i' :printf("i is vowel \n");break;
       case 'o' :printf("o is vowel \n");break;
       case 'u' :printf("u is vowel \n");break;
       default  :printf("this is consonent\n");
    }
  }
}
void main()
{
   alphabet();
}