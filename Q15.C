#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int a,b,c;
	printf("Enter 3 Numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("Minimum Number ");
	if(a<b)
	{
		if(a<c)
		printf("%d",a);
		else
		printf("%d",c);
	}
	else
	{
		if(b<c)
		printf("%d",b);
		else
		printf("%d",c);
	}
	getch();
}