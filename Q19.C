#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int ch,b,h;
	float a=0;
	printf("1.Area of Triangle");
	printf("\n2.Area of Rectangle");
	printf("\n3.Area of Circle");
	printf("\nEnter your Choice ");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("Enter Base ");
		scanf("%d",&b);
		printf("Enter Height ");
		scanf("%d",&h);
		a=b*h*0.5;
		printf("Area of Triangle is %f",a);
	}
	else if(ch==2)
	{
		printf("Enter Base ");
		scanf("%d",&b);
		printf("Enter Height ");
		scanf("%d",&h);
		a=b*h;
		printf("Area of Rectangle is %f",a);
	}
	else if(ch==3)
	{
		printf("Enter Radius ");
		scanf("%d",&h);
		a=h*3.14*h;
		printf("Area of Circle is %f",a);
	}
	else
		printf("Invalid Input");
	getch();
}