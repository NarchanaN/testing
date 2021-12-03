/* C Program to Check Two Matrices are Equal or Not */
#include<stdio.h>
void equal();

void equal()
{
 	int i, j, rows, columns, a[5][5], b[5][5], isEqual;
  
 	printf("\n Please Enter Number of rows and columns :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the First Matrix Elements\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
   
 	printf("\n Please Enter the Second Matrix Elements\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &b[rows][columns]);
    	}
  	}
  	isEqual = 1;
  	
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		if(a[rows][columns] != b[rows][columns])
			{
			  	isEqual = 0;
			  	break;
			}    
   	 	}
  	}
 	if(isEqual == 1)
 	{
 		printf("\n Matrix a is Equal to Matrix b");		
	}
	else
	{
		printf("\n Matrix a is Not Equal to Matrix b");
	}	
}
void main()
{
    equal();
}
