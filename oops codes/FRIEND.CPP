#include<iostream.h>
#include<conio.h>

class B;

class A
{
int a;
public:
    friend class C;     // Friend Class
    A()
    {a=90;}
    void showB(B &a);

};

class B
{
private:
    int b;
public:
    B()  {  b = 11 ; }
    friend void A::showB(B &x);
};

class C {
public:
     void showA(A& x)
      {
       cout << " \n\n A::a : " << x.a;
       }
};

void A::showB(B &x)
{cout << "\n B::b : " << x.b;
}

void main()
{   clrscr();
    A a;
    B x;
    C c;


    c.showA(a);
    a.showB(x);

    getch();
}