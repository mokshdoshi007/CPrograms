#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int a,b,c,d,e,t;
	float p;
	printf("Enter Marks in 5 Subjects out of 100\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	t=a+b+c+d+e;
	p=t/5;
	printf("\nTotal Marks %d",t);
	printf("\nPercentage %f",p);
	getch();
}