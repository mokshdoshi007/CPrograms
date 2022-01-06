#include<stdio.h>
#include<conio.h>
#include<string.h>
int pali(int b, int e, char s[20])
{       if(b<e)
	{
	if(s[b]==s[e])
	{
		b++;
		e--;
		pali(b,e,s);
	}
	else
		return 0;
	}
	return 1;
}
void main()
{
	int i,k;
	char s[20];
	clrscr();
	printf("Enter a String ");
	gets(s);
	i=strlen(s);
	i--;
	k=pali(0,i,s);
	if(k==1)
	printf("\nPalindrome String");
	else
	printf("\nNot a Palindrome String");
	getch();
}