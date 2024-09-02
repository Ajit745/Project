#include<stdio.h>

//Develop a Program to find the largest element from a given 2D array.

int main()
{
	int r,c,i,j,max;
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
	max = a[0][0];
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(max<a[i][j])
			{
				max = a[i][j];
			}
		}
	}	
	printf("Maximum Value Is %d ",max);
	return 0;	
}
