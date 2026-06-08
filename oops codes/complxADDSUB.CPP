#include<iostream.h>
#include<conio.h>

class complex
{
int real;
int complx;

public:void enter()
       {
       cout<<"\n Real part : ";
       cin>>real;
       cout<<" Complex part : ";
       cin>>complx;
       }

       int real_part()
       {return real;}

       int complex_part()
       {return complx;}

}o1,o2;

void main()
{
int ch,real,complx;
char ch1;

do
{
clrscr();

cout<<"\n 1.Add";
cout<<"\n 2.Subtract";
cout<<"\n Enter your choice: ";
cin>>ch;

cout<<"\n Enter the 1st complex no. :";
o1.enter();

cout<<" Enter the 2nd complex no. :";
o2.enter();

switch(ch)
{
case 1:real=o1.real_part()+o2.real_part();
       complx=o1.complex_part()+o2.complex_part();
       cout<<"\n Complex no. after addition : "<<real<<"+i"<<complx;
       break;

case 2:real=o1.real_part()-o2.real_part();
       complx=o1.complex_part()-o2.complex_part();
       cout<<"\n Complex no. after substraction : "<<real<<"-i"<<complx;
       break;

default:cout<<"\n Entered choice is wrong";
}

cout<<"\n\n Do you wish to continue(y/n): ";
cin>>ch1;
}while(ch1=='y');

getch();
}
































































































































































