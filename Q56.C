#include <stdio.h>
#include <conio.h>
void main()
{
int i;
FILE *f;
clrscr();
f=fopen("data.txt","r");
printf("Data in file is\n");
while((fscanf(f,"%d",&i))!=EOF)
printf("%d ",i);
fclose(f);
getch();
}