/* C Program to find sum of minor diagonal */

#include<stdio.h>
void minar();

void minar()
{
  int arr[3][3],i,j,sum=0;
      printf("enter the 3*3 matrix\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
         scanf("%d",&arr[i][j]);
       }
    } 
        for(i=0,j=2;i<3;i++,j--)
        {
          sum+=arr[i][j];
        }
          printf("Sum= %d",sum);
}
void main()
{
  minar();
}


