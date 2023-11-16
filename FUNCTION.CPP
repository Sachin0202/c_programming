#include<stdio.h>
#include<conio.h>
void fact(int);

void fact(int n)
{
int f,  i;
f = 1;
for(i=1; i<=n; i++)
{
f = f*i;
}
printf("factorial = %d",f);
}
void main()
{
int n;
clrscr();
printf("enter any value:");
scanf("%d",&n);
fact(n);
getch();
}