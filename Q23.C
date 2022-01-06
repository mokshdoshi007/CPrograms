#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int i,m,a[10];
	printf("Enter 10 Numbers\n");
	scanf("%d",&a[0]);
	m=a[0];
	for(i=1; i<10; i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>m)
			m=a[i];
	}
	printf("Maximum Number is %d",m);
	getch();
}