#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int a,i=0;
	printf("Enter a Number ");
	scanf("%d",&a);
	while(a!=0)
	{
		i=i*10+a%10;
		a=a/10;
	}
	printf("Reversed Number : %d",i);
	getch();
}