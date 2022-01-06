#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	float a,b,c=0;
	int ch;
	printf("Enter 2 Numbers\n");
	scanf("%f%f",&a,&b);
	printf("1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\nEnter your choice ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		c=a+b;
		printf("\nAddition : %f",c);
		break;
	case 2:
		c=a-b;
		printf("\nSubtraction : %f",c);
		break;
	case 3:
		c=a*b;
		printf("\nMultiplication : %f",c);
		break;
	case 4:
		c=a/b;
		printf("\nDivision : %f",c);
		break;
	default:
		printf("Invalid Input");
	}
	getch();
}