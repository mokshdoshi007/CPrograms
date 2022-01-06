#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int a,i=0;
	printf("Enter a Number ");
	scanf("%d",&a);
	i=(a%10);
	while(a>=10)
		a=a/10;
	printf("Sum of First and Last Digits : %d",(i+a));
	getch();
}