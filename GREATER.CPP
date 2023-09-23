#include<stdio.h>
#include<conio.h>
void main()
{
 int a, b;
 printf("enter two integers:");
 scanf("%d %d",&a, &b);
 if(a > b) {
  printf("a is greater than b.\n");
 } else {
  printf("b is greater than a.\n");
 }
 getch();
 }
