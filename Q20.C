#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int i,a[5];
	printf("Enter 5 Numbers\n");
	for(i=0; i<5; i++)
		scanf("%d",&a[i]);

	for(i=0; i<5; i++)
		printf("Number %d is %d\n",(i+1),a[i]);
	getch();
}