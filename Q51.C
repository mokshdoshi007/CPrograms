#include <stdio.h>
#include <conio.h>
void main()
{
	int *a,*b;
	clrscr();
	printf("Enter Number 1 ");
	scanf("%d",a);
	printf("Enter Number 2 ");
	scanf("%d",b);
	*a=*a+*b;
	printf("\nAddition %d",*a);
	getch();
}