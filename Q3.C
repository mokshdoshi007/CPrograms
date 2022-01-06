#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int a=0,b=0;
	printf("Enter a Number ");
	scanf("%d",&a);
	b=a*a;
	printf("\nSquare : %d",b);
	b=a*a*a;
	printf("\nCube : %d",b);
	getch();
}