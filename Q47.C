#include<stdio.h>
#include<conio.h>
#include<string.h>
char s2[20]="";
int j=0;
void rev(char s[20],int i)
{
	if(i>=0)
	{
		s2[j]=s[i];
		j++;
		rev(s,--i);
	}
	else
	printf("Reversed String is %s",s2);
}
void main()
	{
	int i;
	char s[20],fs[20];
	clrscr();
	printf("Enter a String ");
	gets(s);
	i=strlen(s);
	i--;
	rev(s,i);
	//printf("Reversed String is %s",s2);
	getch();
}
