#include <stdio.h>
#include <conio.h>
void main()
{
	char *a,*b,*c;
	clrscr();
	printf("Enter String 1 ");
	scanf("%s",a);
	printf("Enter String 2 ");
	scanf("%s",b);
	c=a;
	while(*a!='\0')
	*a++;
	while(*b!='\0')
	*a++=*b++;
	printf("\nConcated String : %s",c);
	getch();
}