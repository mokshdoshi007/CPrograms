#include<stdio.h>
#include<conio.h>
void main()
{
	int c=0;
	char s[20];
	clrscr();
	printf("Enter a String ");
	gets(s);
	while(s[c]!='\0')
		c++;
	printf("Length of String is %d",c);
	getch();
}