#include<stdio.h>
void sumofarray();

void sumofarray()
{
  int i,n,sum = 0;
  int a[5] = {1,2,3,4,5};
 
    printf("enter size of array\n");
    scanf("%d",&n);

     printf("enter %d element in the array",n);
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       sum = sum + a[i];
   }
     printf("sum of all array elements %d",sum);
}
void main()
{
  sumofarray();
}