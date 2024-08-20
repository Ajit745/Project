
#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k,l;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		for(k=i; k<=4; k++)
		{
			printf("    ");
		}
		for(j=i; j>=1; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	

	
}

