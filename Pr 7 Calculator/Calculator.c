#include<stdio.h>

	//Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
	//using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
	//is pressed.

int sum(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;	
}

int product(int a,int b)
{
	return a*b;	
}

int divide(int a,int b)
{
	return a/b;	
}

int mode(int a,int b)
{
	return a%b;	
}
void main()
{
	
	int choice,num1,num2;
	
	restart:
	
	printf("\nPress 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %%\n");
	printf("Press 0 for exit\n");
	
	printf("\nEnter Your Choice : ");
	scanf("%d",&choice);
	
	if(choice==0)
	{
		goto end;
	}
	
	printf("\nEnter First Number : ");
	scanf("%d",&num1);
	
	printf("\nEnter Second Number : ");
	scanf("%d",&num2);	
	
	switch(choice)
	{
		case 1 : printf("\nSum of %d And %d is %d.\n",num1,num2,sum(num1,num2));
		break;
		
		case 2 : printf("\nSubstraction of %d And %d is %d.\n",num1,num2,sub(num1,num2));
		break;
		
		case 3 : printf("\nMultiplication of %d And %d is %d.\n",num1,num2,product(num1,num2));
		break;
		
		case 4 : printf("\nDivision of %d And %d is %d\n",num1,num2,divide(num1,num2));
		break;
		
		case 5 : printf("\nModule of %d And %d is %d.\n",num1,num2,mode(num1,num2));
		break;
		
		
		default : printf("\nEnter Valid Choice!!");
	}
	
	goto restart;
	
	end:
	printf("\nThe Program Has Been Ended");
}
