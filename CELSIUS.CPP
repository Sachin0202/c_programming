#include<stdio.h>
#include<conio.h>
void main()
{
float celsius, fahren;
clrscr();
printf("enter the value of celsius");
scanf("%f%f",&celsius, &fahren);
fahren = (celsius*9/5)+32;
printf("fahren = %f\n", fahren);
getch();
}

