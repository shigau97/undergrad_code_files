#include<conio.h>
#include<iostream.h>
#include<stdio.h>

class student
{    protected:
	int roll_no ;
     public:
     void get_number()
  {   cout<<"\n\n Enter the roll no :";
      cin>>roll_no;

      }
};
    class Test: public student
 {    protected:
       float part1,part2;
       public:
       void get_data(float x,float y)
       {    cout<<" Enter the marks of 1st test : ";
	    cin>>x;
	    cout<<" Enter the marks of 2nd test : ";
	    cin>>y;
	    part1=x;
	    part2=y;

       }
     void display_data(void)
     {
	 cout<<"\n\n **DETAILS** ";
	 cout<<"\n Roll no : "<<roll_no;
	 cout<<"\n Marks in 1st test  : "<<part1;
	 cout<<"\n Marks in 2nd test  : "<<part2;

	 }};
     main()
   {  clrscr();
      int x,y;
      Test t1;

      t1.get_number();
      t1.get_data(x,y);
      t1.display_data();
      getch();
       return(0);
      };
