#include<stdio.h>
int percentage();

  int percentage()
  {
   int Hindi,English,Maths,Science,SO;
   float per;
   printf("enter hindi marks\n");
   scanf("%d",&Hindi);
   printf("enter english marks\n");
   scanf("%d",&English);
   printf("enter maths marks\n");
   scanf("%d",&Maths);
   printf("enter science marks\n");
   scanf("%d",&Science);
   printf("enter so. science marks\n");
   scanf("%d",&SO);
   per = (Hindi+English+Maths+Science+SO)/6.0f;
   printf("percentage of 5 subjets are : %f",per);
    return 0;
}
   int main()
{
   percentage();


}