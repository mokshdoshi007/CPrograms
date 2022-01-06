#include <stdio.h>
#include <conio.h>
struct data
{
	int empno,age;
	char address[20],name[20];
};
void main()
{
int i;
struct data d[5];
clrscr();
for(i=0; i<5; i++)
{
printf("For Employee %d\n",i+1);
printf("Enter Employee Name ");
scanf("%s",d[i].name);
printf("Enter Employee Number ");
scanf("%d",&d[i].empno);
printf("Enter Address ");
scanf("%s",d[i].address);
printf("Enter Age ");
scanf("%d",&d[i].age);
}
for(i=0; i<5; i++)
{
printf("\nDetails of Employee %d are : \n",i+1);
printf("Employee Name : %s",d[i].name);
printf("\nEnter Employee Number : %d",d[i].empno);
printf("\nEnter Address : %s",d[i].address);
printf("\nEnter Age : %d ",d[i].age);
}
getch();
}