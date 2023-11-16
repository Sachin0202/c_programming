#include<stdio.h>
#include<conio.h>
void main()
{
int m, n, i, prod;
clrscr();
printf("enter the value of m n ");
scanf("%d%d",&m, &n);
i = 1, prod = 1;
while(i<=n)
{
prod = prod * m;
i++;
}
printf("%d",prod);
getch();
}
