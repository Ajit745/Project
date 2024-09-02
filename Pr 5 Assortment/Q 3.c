#include<stdio.h>

//Develop a Program to find the transpose matrix of a given 2D array.

int main()
{
	int r,c,i,j;
	printf("Enter The Number Of  Rows In The Array :");
	scanf("%d",&r);
	printf("Enter The Number Of  Columns In The Array :");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter The Value Of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Before\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("After\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	return 0;	
}
