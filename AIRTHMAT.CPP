#include<stdio.h>
#include<conio.h>
void main()
{
int n1, n2, sum, sub, mult, mod;
clrscr();
float div;
printf("enter any two numbers:");
scanf("%d%d", &n1, &n2);
sum = n1 + n2;
printf("sum = %d\n",sum);
sub = n1 - n2;
printf("DIFFRENCE = %d\n",sub);
mult = n1 * n2;
printf("PRODUCT = %d\n",mult);
div = (float)n1 / n2;
printf("quotient = %f\n",div);
mod = n1 % n2;
printf("modulus = %d\n",mod);
getch();
}