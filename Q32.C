#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char s1[20],s2[20];
	clrscr();
	printf("Enter a String ");
	gets(s1);
	for(i=0; i<20; i++)
	{
		if((int)s1[i]>=97 && (int)s1[i]<=122)
			s2[i]=(char)((int)s1[i]-32);
		else if((int)s1[i]>=65 && (int)s1[i]<=90)
			s2[i]=(char)((int)s1[i]+32);
		else
			s2[i]=s1[i];
	}
	printf("%s",s2);
	getch();
}