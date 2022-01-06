#include <stdio.h>
#include <conio.h>
int fact(int n)
{
	int i,f=1;
	for(i=2; i<=n; i++)
		f*=i;
	return(f);
}
void main()
{
	int n,f;
	clrscr();
	printf("Enter a Number : ");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial of %d is %d",n,f);
	getch();
}