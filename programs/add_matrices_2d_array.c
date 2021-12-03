//addition of two mwtrix//
#include<stdio.h>
void addmatrix();

void addmatrix()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("enter the value of first matrix\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("enter the value of second matrix\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
          scanf("%d",&b[i][j]);
       }
    }
    printf("value of first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=1;j<3;j++)
        {
            printf("\t%d",a[i][j]);
        }
           printf("\n");
    }
    printf("value of second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=1;j<3;j++)
        {
            printf("\t%d",b[i][j]);
        }
           printf("\n");
    }
       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               c[i][j] = a[i][j] + b[i][j];
           }
       }
    printf("addition of two matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",c[i][j]);
        }
          printf("\n");
    }
}
void main()
{
    addmatrix();
}