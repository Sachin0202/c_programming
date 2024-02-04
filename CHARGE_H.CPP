#include<iostream.h>
#include<conio.h>
int main()
{
 int flat_no, mons, charge;
 clrscr();
 cout<<"\n Enter flat no:";
 cin>>flat_no;
 cout<<"\n Enter mons:";
 cin>>mons;
 if(flat_no%10 == 1)
 {
  charge=(450*10)*mons;
 }
 else if(flat_no%10 == 2)
 {
  charge=(475*10)*mons;
 }
 else if(flat_no%10 == 3)
 {
  charge=(500*10)*mons;
 }
 else if(flat_no%10 == 4)
 {
  charge=(550*10)*mons;
 }
  cout<<"\n total charge:"<<charge;
  return 0;
  }