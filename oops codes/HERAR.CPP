#include<conio.h>
#include<iostream.h>
#include<stdio.h>

class student
{
  protected :
  int rno;
 char  s_name[10];

   public:
   void get_data()
   {  cout<<"\n Enter name of the student :";
      cin>>s_name;
      cout<<" Enter the roll no: ";
      cin>>rno;

      }};

    class  exam : public student

    {  protected :
	int  s1,s2;
	 public:
	   void get_marks()
	{ cout<<" Enter the marks of 1st test :";
	  cin>>s1;
	  cout<<" Enter the score of 2nd test :";
	  cin>>s2;    }
	  void display_exam()
	  {
	    cout<<"\n Student name : ";puts(s_name);
	    cout<<" Roll no : "<<rno;
	    cout<<"\n Enter the marks of 1st test :"<<s1;
	   cout<<"\n Enter the score of 2nd test :"<<s2;
	  }

    };


   class sports : public student
	   {
	      char sportsname[10];
	      public:
	     void get_sports()
	     {
	       cout<<" Enter the sports name : ";
	       gets(sportsname);
	     }
	     void display_sports()
	     {
	       cout<<"\n Student name : "; puts(s_name);
	       cout<<" Sports name : ";puts(sportsname);
	     }


	   };

   int main()
    {
      clrscr();

     exam e;
     sports s;

     cout<<"\n\n\t FOR CLASS EXAM ";
     e.get_data();
     e.get_marks();
     e.display_exam();


     cout<<"\n\n\t  FOR CLASS SPORTS ";
     s.get_data();
     s.get_sports();
     s.display_sports();
     getch();
     return(0);

	}
