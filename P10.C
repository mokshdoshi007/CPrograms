#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",(i*i-i)/2+j);
		}
		printf("\n");
	}
	getch();
}