#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("enter the value of c:");
scanf("%c", &c);
printf("ASCII VALUE = %d \n" ,c);
if(c >= 65 && c <=90 || c >=97 && c <=122)
{
printf("aplha %c \n",c);
}
 else if(c >=48 && c <=57)
{
printf("number %c \n",c);
}
 else
{
printf("special charatcter");
}
getch();
}