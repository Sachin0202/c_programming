#include<iostream.h>
#include<conio.h>
int main()
{
int units, charge;
clrscr();
cout<<"\n enter the no of units:";
cin>>units;
if(units > 0 && units <=2 100)
{
 charge=units*4;
}
else if(units>=101 && units<=200)
{
 charge=units*6;
}
else if(units>=201 && units<=350)
{
 charge=units*7;
}
else if(units>350)
{
 charge=units*10;
}
cout<<"\n total charge:"<<charge;
return 0;
}
