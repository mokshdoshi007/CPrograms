#include <stdio.h>
#include <conio.h>
struct data
{
	int empno,age;
	char address[20],name[20];
}d;
void main()
{
clrscr();
printf("Enter Employee Name ");
scanf("%s",d.name);
printf("Enter Employee Number ");
scanf("%d",&d.empno);
printf("Enter Address ");
scanf("%s",d.address);
printf("Enter Age ");
scanf("%d",&d.age);
printf("Employee Name : %s",d.name);
printf("\nEnter Employee Number : %d",d.empno);
printf("\nEnter Address : %s",d.address);
printf("\nEnter Age : %d ",d.age);
getch();
}