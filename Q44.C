#include<stdio.h>
#include<conio.h>
void rev(char s1[20])
{
	int i = strlen(s1)-1;
	printf("Reversed String is ");
	while(i>=0)
	{
		printf("%c",s1[i]);
		i--;
	}
}
void main()
{
	char s1[20];
	clrscr();
	printf("Enter a String ");
	gets(s1);
	rev(s1);
	getch();
}
