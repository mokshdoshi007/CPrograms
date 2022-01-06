#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,c=1;
	char s[20];
	clrscr();
	printf("Enter a String ");
	gets(s);
	while(s[i]!='\0')
	{
		if(s[i]==' ')
			c++;
		i++;
	}
	printf("Words in String are %d",c);
	getch();
}