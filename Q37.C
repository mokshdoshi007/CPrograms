#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,j=0;
	char s1[20],s2[20],s3[40];
	clrscr();
	printf("Enter String 1 ");
	gets(s1);
	printf("Enter String 2 ");
	gets(s2);
	while(s1[i]!='\0')
	{
		s3[i]=s1[i];
		i++;
	}
	while(s2[j]!='\0')
	{
		s3[i+j]=s2[j];
		j++;
	}
	s3[i+j]='\0';
	printf("Concated String is %s",s3);
	getch();
}
