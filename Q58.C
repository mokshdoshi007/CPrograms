#include <stdio.h>
#include <conio.h>
void main()
{
int i;
FILE *f;
clrscr();
f=fopen("data.txt","a");
printf("Enter Numbers (0 to stop)\n");
do
{
scanf("%d",&i);
if(i!=0)
fprintf(f,"%d ",i);
}while(i!=0);
fclose(f);
getch();
}