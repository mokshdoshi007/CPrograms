#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int a,i;
	printf("Enter a Number ");
	scanf("%d",&a);
	for(i=1; i<=10; i++)
		printf("\n%d X %d = %d",a,i,(a*i));
	getch();
}