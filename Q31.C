#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int i,j,m;
	int a[3][3];
	printf("Enter 9 Elements of Matrix\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&a[i][j]);
			if(i==0 && j==0)
				m=a[0][0];
			else if(a[i][j]>m)
				m=a[i][j];
		}
	}
	printf("\nMaximum Number is %d",m);
	getch();
}