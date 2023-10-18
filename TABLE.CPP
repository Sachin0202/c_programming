#include<stdio.h>
#include<conio.h>
void main()
{
int a=1;
int no=0;
clrscr();
printf("enter any  number:");
scanf("%d",&no);
do
{
printf("%d\n",(no*a));
a++;
}
while(a<=10);
getch();
}


