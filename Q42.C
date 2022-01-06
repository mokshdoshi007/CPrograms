#include <stdio.h>
#include <conio.h>
void max(int a[10])
{
	int i,m=a[0];
	for(i=1; i<10; i++)
	{
		if(a[i]>m)
			m=a[i];
	}
	printf("Maximum Number is %d",m);
}
void main()
{
	int i,a[10];
	clrscr();
	printf("Enter 10 Numbers\n");
	for(i=0; i<10; i++)
		scanf("%d",&a[i]);
	max(a);
	getch();
}