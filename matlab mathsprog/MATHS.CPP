#include<iostream.h>
#include<conio.h>
#include<math.h>

float bisect(float a, float b)
{
 return (a+b)/2;
}

float f(float x)
{
 return pow(x,3)-4*x-9;
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
 cout << "\n ">>aerr>>maxitr;

  while(itr<=maxitr)
{
 x=bisect(a,b);

 if(f(a)*f(x)<0)
  b=x;
 else
  a=x;

 x1=bisect(a,b);

 if(abs(x1-x)<aerr&&itr==maxitr)
  cout<<x1<<" Accuracy Achieved \n";
 if(abs(x1-x)>=aerr&&itr==maxitr)
  cout<<"\n Solution not convergent";

 itr++;
}

getch();

}