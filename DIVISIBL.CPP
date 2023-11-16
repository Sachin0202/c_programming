#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the value of n:");
scanf("%d",&n);
if(n%55 == 0)
{
  printf("n is divisible by 5 and 11");
}
else
{
  printf("n is not divisible by 5 and 11");
}
getch();
}