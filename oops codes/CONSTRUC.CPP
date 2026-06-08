#include<iostream.h>
#include<conio.h>

class sum
{
    int i,j;

    public :
	       sum()
	       {
		  i=10;
		  j=40;

		  cout<<"\nDEFAULT CONSTRUCTOR CALLED \n ";

		  cout<<" Sum of "<<i<<"+"<<j<<" : "<<i+j;
	       }

	       sum(int a, int b)
	       {
		   i=a;
		   j=b;

		  cout<<"\nPARAMETRISED CONSTRUCTOR CALLED \n ";
					  cout<<" Sum of "<<i<<"+"<<j<<" : "<<i+j;

	       }

	       sum(sum &m)
	       {
		  j=m.j;
		  i=m.i;

		  cout<<"\n\n COPY CONSTRUCTOR CALLEd\n ";
		  cout<<" Sum of "<<i<<"+"<<j<<" : "<<i+j;
	       }

}m1,m2;

void main()
{
 clrscr();

 sum();
 sum(45,30);
 m1=sum(20,78);
 sum m2(m1);

 getch();
}


