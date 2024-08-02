#include<stdio.h>
#include<conio.h>
void main()
{
	//Develop a Program to find the sum of a number's first and last digits.
		int i=1,n,ld;
	printf("Enter a number :");
	scanf("%d",&n);
	ld = n%10;
	
	
	while(n>9)
	{
		n = n/10;
	}
	printf("First Digit = %d\n\n",n);
	printf("Last digit = %d\n\n",ld);
	printf("Sum of First and Last digit is %d",n+ld);
}
