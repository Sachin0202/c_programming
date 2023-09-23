 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 float SI, p, r, t;
 printf("enter the value of p:");
 scanf("%f", &p);
 printf("enter the value of r:");
 scanf("%f", &r);
 printf("enter the value of t:");
 scanf("%f", &t);
 SI = p*r*t*0.01;
 printf("SI = %f", SI);
 getch();
 }