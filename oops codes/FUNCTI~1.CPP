#include<iostream.h>
#include<conio.h>
//using namespace std ;
class areas
{
   private:
   int r;
   float l,b ;
   public:
   void get_data()
   {
	cout<<"\n Enter the radius of circle : ";
	cin>>r;
	cout<<" Enter the length an breadth of rectangle : ";
	cin>>l>>b;
   }
   void display()
   {
	cout<<"\n\n Radius of circle : "<<r;
	cout<<"\n Area  of circle : "<<area(r);
	cout<<"\n\n  Length of rectangle : "<<l<<"\n Breadth of rectangle : "<<b;
	cout<<"\n Area of rectangle :"<<area(l,b);
   }
   float area(int r);
   float area(float a,float b);
};
float areas::area(int r)
{
	return(3.14*r*r);
}
float areas::area(float a,float b)
{
	return a*b;
}
int main()
{
	clrscr();
	areas a1 ;
	cout<<"\n\t Made By : Paras Jain ";

	a1.get_data();
	a1.display();
	getch();
	return 0;
}
