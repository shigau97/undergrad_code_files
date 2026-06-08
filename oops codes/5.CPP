#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class student
{
  int rollno;
  char name[20];
  float marks[4];
  float grade;

  void calculate()
  {
     float sum=0;
     int i;

     for(i=0;i<4;i++)
     {
	sum=sum+marks[i];
     }

     grade=sum/4;
  }

  public:
	  void readdata()
	  {
	    cout<<" Enter the name : ";
	    gets(name);
	    cout<<" Enter the roll no : ";
	    cin>>rollno;
	    cout<<" Enter the marks of 4 subjects : ";
	    for(int i=0;i<4;i++)
	    {
	      cin>>marks[i];
	    }

	    calculate();
	  }

	  void display()
	  {
	    cout<<"\n\n Name : ";
	    puts(name);
	    cout<<" Roll No : "<<rollno ;
	    cout<<"\n Grade : "<<grade;
	  }
  }s;

  void main()
  {
    clrscr();
    s.readdata();
    s.display();

    getch();
  }