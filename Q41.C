#include<stdio.h>
#include<conio.h>
int fibo(int x)
{
	if(x==1 || x==0)
		return x;
	else
		return (fibo(x-1)+fibo(x-2));
}
void main()
{
	int i,n;
	clrscr();
	printf("Enter Number of Fibonacci Terms Required : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		printf("%d ",fibo(i));
	getch();
}