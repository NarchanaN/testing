// C program to add two number using pointers //

#include <stdio.h>

int main()
{
    int num1, num2, sum;
    int *p1, *p2;

    p1 = &num1; 
    p2 = &num2; 

    printf("Enter any two numbers:\n");
    scanf("%d%d", p1, p2);

    sum = *p1 + *p2;

    printf("Sum = %d", sum);

    return 0;
}
