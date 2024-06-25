#include<stdio.h>
#include<conio.h>

void main()
{
	int AngleA,AngleB,AngleC;
	printf("Enter Angle A :");
	scanf("%d",&AngleA);
	printf("Enter Angle B :");
	scanf("%d",&AngleB);
	
	AngleC=180-(AngleA+AngleB);
	
	printf("AngleC = %d",AngleC);
}
