#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int i,s=0,a[10];
	printf("Enter 10 Numbers\n");
	for(i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
		s+=a[i];
	}
	printf("Total : %d\n",s);
	printf("Average : %f",(float)s/10);
	getch();
}