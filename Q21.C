#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int i,ec=0,oc=0,a[10];
	printf("Enter 10 Numbers\n");
	for(i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		ec++;
		else
		oc++;
	}
	printf("Odd  Numbers : %d\n",oc);
	printf("Even Numbers : %d",ec);
	getch();
}