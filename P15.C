#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int i,j,k;
	for(i=1; i<=5; i++)
	{
		for(j=5; j>=i; j--)
			printf("* ");
		for(k=2; k<=i; k++)
			printf("    ");
		for(j=5; j>=i; j--)
			printf("* ");
		printf("\n");
	}
	getch();
}