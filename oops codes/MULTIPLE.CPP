#include<conio.h>
#include<iostream.h>

class student
{
  protected:
  int rno,t1,t2;
   public:
   void get_data()
   {
      cout<<"\n Enter the roll no: ";
      cin>>rno;
      cout<<"\n Enter the score of Test1 :";
      cin>>t1 ;
      cout<<"\n Enter the score of Test2 :";
      cin>>t2;
      }};

    class sports

    {  protected :
	int s_mark;
	 public:
	   void get_marks()
	{ cout<<"\n Enter the sports marks :";
	  cin>>s_mark;
	  }};
    class statement: public student, public sports


    {
	     int tot,avg;
	      public:
	     void display_data()
	{  tot=(t1+t2+s_mark);
	   avg=(tot/3);
	   cout<<"\n roll_no :"<<rno<<"\n";
	   cout<<"\n Total: "<<tot<<"\n";
	   cout<<"\n average :"<<avg<<"\n";
	   }};

       int     main()
    {   clrscr();
     statement obj;
     obj.get_data();
     obj.get_marks();
     obj.display_data();
     getch();
     return(0);

	}
