#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int a,b,c;
	printf("Enter 3 Numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	int d = a>b?a>c?a:c:b>c?b:c;
	printf("Maximum Number %d",d);
	getch();
}