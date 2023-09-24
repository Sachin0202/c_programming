#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, c;
clrscr();
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d", &b);
printf("enter the value of c:");
scanf("%d",&c);
if(c*c == a*a + b*b)
{
printf("triangle is right angle triangle");
}
else
{
printf("triangle is not right angle triangle");
}
getch();
}