#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int i,j,k;
	int a[3][3],b[3][3],c[3][3];
	printf("Enter 9 Elements of Matrix 1\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			c[i][j]=0;
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter 9 Elements of Matrix 2\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
			scanf("%d",&b[i][j]);
	}
	printf("\nMatrix 1 is :");
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
			printf("%d ",a[i][j]);
	}
	printf("\n\nMatrix 2 is :");
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
			printf("%d ",b[i][j]);
	}
	printf("\n\nMultiplication of Matrix is :");
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
		{
			for(k=0; k<3; k++)
				c[i][j]+=a[i][k]*b[k][j];
			printf("%d ",c[i][j]);
		}
	}
	getch();
}