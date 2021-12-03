/* C Program to find Sum of Diagonal Elements of a Matrix */

#include<stdio.h>
void diagonal();

void diagonal()
{
 	int i, j, rows, columns, a[10][10], Sum = 0;
  
 	printf("\nEnter Number of rows and columns\n");
 	scanf("%d %d", &i, &j);
 
 	printf("\nEnter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
   	  
 	for(rows = 0; rows < i; rows++)
  	{
   		Sum = Sum + a[rows][rows];
  	}
 
 	  printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );
}
void main()
{
    diagonal();
}


