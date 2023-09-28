#include<stdio.h>
#include<conio.h>
void main()
{
int side1, side2, side3;
clrscr();
printf("enter the side1:");
scanf("%d",&side1);
printf("enter the side2:");
scanf("%d",&side2);
printf("enter the side3:");
scanf("%d",&side3);
if(side1 == side2 && side2 == side3)
{
printf("triangle is equilateral");
}
else if(side1 == side2 || side1 == side3 || side2 == side3)
{
printf("triagle is isosceles");
}
else
{
printf("triagle is scalene");
}
getch();
}