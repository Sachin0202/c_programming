#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter any number of month:");
scanf("%d",&n);
if(n == 1 || n == 3 || n == 5 || n ==7 || n == 8 || n == 10 || n == 12)
{
printf("month is 31 days");
}
else if(n == 4 || n == 6 || n == 9 || n == 11)
{
printf("month is 30 days");
}
else if(n == 2)
{
printf("month is 28/29 days");
}
else
{
printf("invalid month");
}
getch();
}
