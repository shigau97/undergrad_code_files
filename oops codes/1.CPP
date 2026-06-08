#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class emp
{
  char name[20];
  float earning;
  float bonus;

  public:
	  void inputdata()
	  {
	    cout<<"\n\n Enter the name of employee : ";
	    gets(name);
	    cout<<" Enter the earning of employee : ";
	    cin>>earning;
	  }

	  void computebonus()
	  {
	     if(earning>=2000)
	     bonus=0.1*earning;
	     else
	     bonus=0.2*earning;
	  }

	  void outputinfo()
	  {

	    cout<<"\n Name : ";
	    puts(name);
	    cout<<" Bonus : "<<bonus;
	  }
  }e;

  void main()
  {
    clrscr();
    e.inputdata();
    e.computebonus();
    e.outputinfo();

    getch();
  }