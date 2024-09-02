#include<stdio.h>

//Develop a Program to print and find the sum of all elements of a given row & column from a 2D array.

int main()
{
	int r,c,i,j,x,y,sum_row,sum_col;
	printf("Enter The Number Of  Rows In The Array :");
	scanf("%d",&r);
	printf("Enter The Number Of  Columns In The Array :");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter The Value Of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter Row Number :");
	scanf("%d",&x);
	
	printf("\nValues Of Row Number %d are ",x);
	for(i=0; i<r; i++)
	{
		printf("%d ",a[x][i]);
	}
		
	for(i=0; i<r; i++)
	{
		sum_row = sum_row + a[x][i];
	}
	
	printf("\nSum Of Values Of Row number %d Is %d ",x,sum_row);
	
	printf("\nEnter Column Number :");
	scanf("%d",&y);
	
	printf("\nValues Of Column Number %d are ",y);
	for(j=0; j<c; j++)
	{
		printf("%d ",a[j][y]);
	}
		
	for(j=0; j<c; j++)
	{
		sum_col = sum_col + a[j][y];
	}
	
	printf("\nSum Of Values Of Column number %d Is %d ",y,sum_col);

	return 0;	
}
