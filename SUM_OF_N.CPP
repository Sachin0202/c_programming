#include<stdio.h>
#include<conio.h>
void main()
{
int i, sum, n;
clrscr();
i = 1, sum = 0;
printf("enter the value of n:");
scanf("%d",&n);
while(i<=n)
{
sum = sum + i;
i++;
}
printf("%d",sum);
getch();
}