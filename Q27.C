#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int i,j;
	int a[3][3];
	printf("Enter 9 Elements of Matrix\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
			scanf("%d",&a[i][j]);
	}
	printf("\nMatrix is :");
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
			printf("%d ",a[i][j]);
	}
	getch();
}