#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0;
	char s1[20],s2[20];
	clrscr();
	printf("Enter a String ");
	gets(s1);
	while(s1[i]!='\0')
	{
		s2[i]=s1[i];
		i++;
	}
	s2[i]=0;
	printf("Copied String is %s",s2);
	getch();
}