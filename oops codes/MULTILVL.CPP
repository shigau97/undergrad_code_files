#include<conio.h>
#include<iostream.h>

class student
{
  protected:
  int rno;
 char  s_name[9];

   public:
   void get_data()
   {  cout<<"\n\n Enter name of the student :";
      cin>>s_name;
      cout<<" Enter the roll no: ";
      cin>>rno;

      }};

    class  exam : public student

    {  protected :
	int  s1,s2,s3;
	 public:
	   void get_marks()
	{ cout<<" Enter the marks of 1st test :";
	  cin>>s1;
	  cout<<" Enter the score of 2nd test :";
	  cin>>s2;
	  cout<<" Enter the score of 3rd test :";
	  cin>>s3;
	  }};


	class result : public exam
	   {
	     int tot,avg;
	      public:
	     void display_data()
	{  tot=(s1+s2+s3);
	   avg=(tot/3);

	   cout<<"\n\t **RESULT**";
	   cout<<"\n Name :"<<s_name;
	   cout<<"\n Roll_no :"<<rno;
	   cout<<"\n Total: "<<tot;
	   cout<<"\n Average :"<<avg;
	   }};

   int main()
    {
      clrscr();
     result obj;

     obj.get_data();
     obj.get_marks();
     obj.display_data();
     getch();
     return(0);

	}
