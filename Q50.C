struct student
{
int rollno,m1,m2,m3,t;
float p;
};
void main()
{
int i;
struct student s[5];
clrscr();
for(i=0; i<5; i++)
{
printf("For Student %d, Enter",i+1);
printf("\nRoll Number ");
scanf("%d",&s[i].rollno);
printf("Marks in 3 Subjects\n");
scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
s[i].t=s[i].m1+s[i].m2+s[i].m3;
}
for(i=0; i<5; i++)
{
printf("\nFor Student %d with Roll Number %d",i+1,s[i].rollno);
printf("\nTotal Marks : %d",s[i].t);
s[i].p=(float)s[i].t/3;
printf("\nPercentage : %f",s[i].p);
}
getch();
}