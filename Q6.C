#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	float p,r,t,si;
	printf("Enter Principal Amount ");
	scanf("%f",&p);
	printf("\nEnter Rate of Interest ");
	scanf("%f",&r);
	printf("\nEnter Time in Years ");
	scanf("%f",&t);
	si=p*r*t*0.01;
	printf("\nSimple Interest : %f",si);
	getch();
}