#include<stdio.h>
#include<conio.h>
void main()
{
	//Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a do-while loop.
	char alpha='A';
	
	do
	{
		
		if(alpha=='A'||alpha=='E'||alpha=='I'||alpha=='M'||alpha=='Q'||alpha=='U'||alpha=='Y')
		{
			printf("%c ",alpha);
		}
		alpha++;
	}while(alpha<='Z');
	
}
