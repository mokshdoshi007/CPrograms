#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int a,f=1;
	printf("Enter a Number ");
	scanf("%d",&a);
	while(a!=1)
	{
		f=f*a;
		a--;
	}
	printf("Factorial %d",f);
	getch();
}