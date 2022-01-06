#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int i,j,a[5];
	printf("Enter 5 Numbers\n");
	for(i=0; i<5; i++)
		scanf("%d",&a[i]);
	printf("Sorted Array : ");
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(a[j]<a[i])
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
		printf("%d ",a[i]);
	}
	getch();
}