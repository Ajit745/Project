#include<stdio.h>

//Develop a program that finds all the negative elements from a given 1D array.

int main()
{
	int i,n;
	printf("Enter The Size Of Array :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter The Value Of a[%d]",i);
		scanf("%d",&a[i]);
	}

	printf("\n\nThe Negative Numbers In The Array Are :");
		
	for(i=0; i<n; i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
		}
		
	}
	return 0;	
}
