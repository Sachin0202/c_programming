#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, c;
clrscr();
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf("enter the value of c:");
scanf("%d",&c);
if(a+b>c && b+c>a && a+c>b)
{
printf("triangle is valid");
}
else
{
printf("triangle is invalid");
}
getch();
}