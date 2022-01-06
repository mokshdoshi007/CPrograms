#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int a;
	printf("Enter a Number ");
	scanf("%d",&a);
	if(a>=0)
		printf("Positive Number");
	else
		printf("Negative Number");
	getch();
}