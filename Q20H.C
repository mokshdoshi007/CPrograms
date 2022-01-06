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
		if(i<(a%10))
			i=(a%10);
		a=a/10;
	}
	printf("Maximum Digit : %d",i);
	getch();
}