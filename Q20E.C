#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int a,x=0,y=1,z=1;
	printf("Enter a Number ");
	scanf("%d",&a);
	printf("%d %d ",x,y);
	while(z<a)
	{
		z=x+y;
		if(z>a)
		break;
		printf("%d ",z);
		x=y;
		y=z;
	}
	getch();
}