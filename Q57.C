#include <stdio.h>
#include <conio.h>
void main()
{
int i;
FILE *f;
clrscr();
f=fopen("data.txt","w");
printf("Enter Numbers (0 to stop)\n");
do
{
scanf("%d",&i);
if(i!=0)
fprintf(f,"%d ",i);
}while(i!=0);
fclose(f);
f=fopen("data.txt","r");
printf("Data in file is\n");
while((fscanf(f,"%d",&i))!=EOF)
printf("%d ",i);
fclose(f);
getch();
}