#include<iostream.h>
#include<conio.h>
#include<math.h>

float regulafalsi(float a, float b)
{
 return ((a*f(b)-b*f(a))/(f(b)-f(a));
}

float f(float x)
{
 return pow(x,3)-2*x-5;
}

void main()
{
 clrscr();

 float a,b,aerr,x,x1;
 int itr=1,maxitr;
 cout <<"\n enter left hand limit";
 cin>>a;
 cout<< "\n enter right hand limit";
 cin>>b;
 cout << "\n enter the allowed error";
 cin>>aerr;
 cout <<"enter the maximum iterations";
 cin>>maxitr;

  while(itr<=maxitr)
{
 x=regulafalsi(a,b);

 if(f(a)*f(x)<0)
  b=x;
 else
  a=x;

 x1=regulafalsi(a,b);

 if(abs(x1-x)<aerr&&itr==maxitr)
  cout<<x1<<" Accuracy Achieved \n";
 if(abs(x1-x)>=aerr&&itr==maxitr)
  cout<<"\n Solution not convergent";

 itr++;
}

getch();

}