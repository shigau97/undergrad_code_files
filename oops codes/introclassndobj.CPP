#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class emp
{
   int age;
   char name[20];
   public: void getdata();
	   void disp();

};

void emp::getdata()
{

  cout<<" \n Enter the name : ";
  gets(name);

  cout<<" Enter the age : ";
  cin>>age;
}

void emp::disp()
{

   cout<<"\n Name : ";
   puts(name);
   cout<<"\n Age : "<<age;
}

main()
{
   clrscr();
   emp e1;
   e1.getdata();
   e1.disp();

   getch();
   return 0;
}



