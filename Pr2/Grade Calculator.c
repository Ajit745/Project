#include<stdio.h>
#include<conio.h>

void main()
{
	int score;
	char grade;
	printf("Enter Your Score : ");
	scanf("%d",&score);
	
	(score>=80 && score<=100)?grade='A':
							  (score>=60 && score<80)?grade='B':
								(score>=40 && score<60)?grade='C':
								  (score>=30 && score<40)?grade='D':
								    (score>=0 && score<30)?grade='F':
									  printf("Enter Valid Score");
	switch(grade)
	{
		case 'A':printf("Your Grade is A.\nExcellent Work");
		break;
		case 'B':printf("Your Grade is B.\nWell Done");
		break;
		case 'C':printf("Your Grade is C.\nGood Job");
		break;
		case 'D':printf("Your Grade is D.\nYou Passed.But You Can Do Better!");
		break;
		case 'F':printf("Your Grade is F.\nSorry,You Failed!!!");
		break;
		
		
    }	
	
	if( grade =='A' ||  grade =='B' ||  grade =='C' || grade =='D')
	{
	   	printf("\nYour Are Eligible For The Next Level");
    }
	else
	{
		printf("\nYour Are Not Eligible For The Next Level");
    }					  
									  
									  
									  
}
