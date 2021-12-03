// swap two numbers using pointer. //

#include<stdio.h>

int main()
{
    int a,b,swap;
    int *p1, *p2;

    p1 = &a;
    p2 = &b;
    printf("enter any two numbers\n");
    scanf("%d%d",p1,p2);

    swap = *p1;
    *p1 = *p2;
    *p2 = swap;

    printf("after swaping a = %d  b = %d\n",a,b);
    return 0;
}