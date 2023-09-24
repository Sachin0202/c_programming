 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int n;
 clrscr();
 printf("enter the value of n");
 scanf("%d", &n);
 if(n%4==0)
 printf("n is leap year");
 else if(n%100!=0)
 printf("n is not leap year");
 else if(n%400==0)
 printf("n is leap year");
 else
 printf("n is not leap year");
 getch();
 }