#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int x1,x2,y1,y2,p0,pk,n,pk1;
clrscr();
cout<<"enter\"x\" the value of the starting point";
cin>>x1;
cout<<"enter\"y\" the value of the starting point";
cin>>y1;
cout<<"enter \"x\" the value of end point";
cin>>x2;
cout<<"enter \"y\" the value of end point";
cin>>y2;
p0=(2*(y2-y1))+(x2-x1);
n=x1;
pk=p0;
while(n!=x2)
{
if(pk>0)
{
pk1=pk+(2*(y2-y1))-(2*(x2-x1));
ynext++;}
else if(pk<0)
pk1=pk+(2*(y2-y1));
pk=pk1;
n++;
}
getch();
 }
