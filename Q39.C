#include <stdio.h>
#include <conio.h>
void square(int a)
{
	int b=a*a;
	printf("Square : %d",b);
}
void cube(int a)
{
	int b=a*a*a;
	printf("\nCube : %d",b);

}
void main()
{
	int a=0,b=0;
	clrscr();
	printf("Enter a Number ");
	scanf("%d",&a);
	square(a);
	cube(a);
	getch();
}