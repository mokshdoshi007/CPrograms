#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int a;
	printf("Enter Year ");
	scanf("%d",&a);
	if(a%100==0)
	{
		if(a%400==0)
		printf("Leap Year");
		else
		printf("Not a Leap Year");
	}
	else if(a%4==0)
		printf("Leap Year");
	else
		printf("Not a Leap Year");
	getch();
}