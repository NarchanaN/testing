// find the length of the string using pointer //
#include<stdio.h>

void main()
{
  int i,c = 0;
  char str[10],*p;
  printf("enter a string\n");
  gets(str);
  p = str;
  while(*p!='\0')
  {
      c++;
      p++;
  }
    printf("string length is %d",c);
}

