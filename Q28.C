#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int i,j;
	int a[3][3],b[3][3],c[3][3];
	printf("Enter 9 Elements of Matrix 1\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
			scanf("%d",&a[i][j]);
	}
	printf("Enter 9 Elements of Matrix 2\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&b[i][j]);
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nMatrix 1 is :");
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
			printf("%d ",a[i][j]);
	} printf("\n\nMatrix 2 is :");
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
			printf("%d ",b[i][j]);
	}printf("\n\nAddition of Matrix is :");
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
			printf("%d ",c[i][j]);
	}
	getch();
}