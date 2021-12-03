#include<stdio.h>
int main()
{
   int arr[10]={20,10,50,70,40,30,90,80,60,100};
   int i,n;
   int element;
   printf("enter an element\n");
   scanf("%d",&element);
     for(i=0;i<10;i++)
     {
         if(element==arr[i])
         { 
             break;
         }
     }
             if(i<10)
                printf("element found");
             else
                printf("element not found"); 
    return 0;
}