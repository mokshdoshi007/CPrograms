#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int a,i=2;
	printf("Enter Number ");
	scanf("%d",&a);
	while(i<a)
	{
		if(a%i==0)
			break;
		i++;
	}
	if(i==a)
		printf("Prime Number");
	else
		printf("Not a Prime Number");
	getch();
}