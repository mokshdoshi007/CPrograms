#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int i,s,a[10];
	printf("Enter 10 Numbers\n");
	for(i=0; i<10; i++)
		scanf("%d",&a[i]);
	printf("Which position element is required? ");
	scanf("%d",&s);
	printf("Element at position %d is %d",s,a[s-1]);
	getch();
}