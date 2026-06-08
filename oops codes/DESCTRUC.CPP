#include<iostream.h>
#include<conio.h>

class sum
{
    int i,j;

    public :
	       sum(int a, int b)
	       {
		   i=a;
		   j=b;

		  cout<<"\n\n PARAMETRISED CONSTRUCTOR CALLED \n";
		  cout<<" Sum of "<<i<<"+"<<j<<" : "<<i+j;

	       }

	       ~sum()
	       {
		   cout<<"\n\n DESTRUCTOR called";
	       }

};

void main()
{
 clrscr();

 sum(25,30);
 getch();
}


