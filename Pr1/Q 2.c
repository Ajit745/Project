#include<stdio.h>
#include<conio.h>

void main()
{
	int BaseSalary,GrossSalary,HRA,DA,TA;
	HRA=10;
	DA=5;
	TA=8;
	printf("Enter Your Base Salary :");
	scanf("%d",&BaseSalary);
	
	GrossSalary=BaseSalary+(BaseSalary*HRA)/100+(BaseSalary*DA)/100+(BaseSalary*TA)/100;
	printf("Your Gross Salary : %d",GrossSalary);
}
