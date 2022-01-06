#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	float a=0,r;
	printf("Enter Radius ");
	scanf("%f",&r);
	a=r*r*3.14;
	printf("\nArea of Circle : %f",a);
	getch();
}
