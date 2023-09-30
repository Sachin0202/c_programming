#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter any character:");
scanf("%c",&c);
if(c >= 'a' && c <= 'z')
{
printf("lowercase");
}
else
{
printf("uppercase");
}
getch();
}