#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter any no:");
scanf("%d", &n);
switch(n)
{
    case 1:printf("today is monday");
	break;
    case 2:printf("today is wednesday");
	break;
    case 3:printf("today is tuesday");
	break;
    case 4:printf("today is thursday");
	break;
    case 5:printf("today is friday");
	break;
    case 6:printf("today is saturday");
	break;
    case 7:printf("today is sunday");
	break;
    default:printf("invalid day");
}
getch();
}