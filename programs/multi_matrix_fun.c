#include<stdio.h>    
void multi();

void multi()
{
  int a[5][5],b[5][5],mul[5][5],r,c,i,j,k;    
   printf("enter the number of row=");    
   scanf("%d",&r);    
   printf("enter the number of column=");    
   scanf("%d",&c);    
   printf("enter the first matrix element=\n");    
  for(i=0;i<r;i++)    
  {    
    for(j=0;j<c;j++)    
    {    
     scanf("%d",&a[i][j]);    
    }    
  }
   
printf("enter the second matrix element=\n");    
for(i=0;i<r;i++)    
{    
   for(j=0;j<c;j++)    
   {    
      scanf("%d",&b[i][j]);    
   }    
}    
     printf("multiply of the matrix=\n");    
     for(i=0;i<r;i++)    
     {    
        for(j=0;j<c;j++)    
        {     
          mul[i][j]=0;    
            for(k=0;k<c;k++)    
           {    
             mul[i][j]+=a[i][k]*b[k][j];    
           }    
        }    
     }    
//for printing result    
    for(i=0;i<r;i++)    
    {     
      for(j=0;j<c;j++)    
      {    
        printf("%d\t",mul[i][j]);    
      }    
         printf("\n");    
    }    
}
void main()
{
    multi();
}  
