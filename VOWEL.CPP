#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter any character:");
scanf("%d",&ch);
if(ch=='a'||ch=='i'||ch=='o'||ch=='e'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
  printf("it is vowel");
}
else
{
  printf("it is consonent");
}
getch();
}