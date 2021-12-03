#include<stdio.h>
void natural();

void natural()
{
    int i,num,sum = 0;
    printf("Enter a number\n");
    scanf("%d",&num);

    for(i=0;i<=num;i++)
    {
        sum = sum + i;
    }
    printf("sum of first %d number is %d",num,sum);
}
void main()
{
   natural();
}
