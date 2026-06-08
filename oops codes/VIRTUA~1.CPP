#include<iostream.h>
#include<conio.h>

//using namespace std ;

class Base
{
public:
	void Display( )
	{cout << "\n display base ";}
	virtual void show(){cout<<"\n show base ";}
};
class Derived:public Base
{
public:
		void Display( )
		{
		cout << "\n display derived" ;	}
		void show(){cout<<"\n show derived ";}
};
int main()
{
    clrscr();

	Base B ;
	Derived D;
	Base *bptr;
    cout<<"\n\t Made by : Vikas Singh ";
	cout<<"\n bptr points to Base \n";
	bptr=&B;
	bptr->Display(); //calls Base version
	bptr->show();  //calls base version

	cout<<"\n\n\n bptr points to Derived\n";
	bptr=&D;
	bptr->Display(); //calls Base version
	bptr->show();  //call derived version

getch();
return 0;
}





      