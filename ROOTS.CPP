#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
double a, b, c, r1, r2, d;
clrscr();
printf("enter the value of a b c");
scanf("%lf%lf%lf",&a, &b, &c);
d =b*b - 4*a*c;
if(d>0)
{
 r1 = -b+ sqrt(d) / (2*a);
 r2 = -b- sqrt(d) / (2*a);
 printf("r1 = %2lf and r2 = %2lf", r1, r2);
 }
  else if(d==0)
  {
   r1 = -b / (2*a);
   r2 = -b / (2*a);
   printf("roots are equal = %2lf",r1, r2);
  }
  else
  {
   printf("imaginary root");
  }
  getch();
}