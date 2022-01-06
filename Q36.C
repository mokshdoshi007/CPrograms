#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,j=0,k=0;
	char s1[20],s2[20];
	clrscr();
	printf("Enter a String ");
	gets(s1);
	while(s1[i]!='\0')
		i++;
	i--;
	while(i>=0)
	{
		s2[i]=s1[j];
		if(s2[i]!=s1[i])
			k=1;
		j++;
		i--;
	}
	printf("Reversed String is %s",s2);
	if(k==0)
	printf("\nPalindrome String");
	else
	printf("\nNot a Palindrome String");
	getch();
}
