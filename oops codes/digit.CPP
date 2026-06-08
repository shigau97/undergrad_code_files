#include<iostream.h>
#include<conio.h>

class digit
{
   int num;

   public : digit(int n)
	    {
	       num=n;
	       int rem,dig=0;

	       do
	       {
		  rem=num%10;
		  dig=dig*10+rem;
		  num/=10;
	       }while(num!=0);

	       do
	       {
		  rem=dig%10;
		  switch(rem)
		  {
		    case 0:cout<<"zero";
			   break;

		    case 1:cout<<"one";
			   break;

		    case 2:cout<<"two";
			   break;

		    case 3:cout<<"three";
			   break;

		    case 4:cout<<"four";
			   break;

		    case 5:cout<<"five";
			   break;

		    case 6:cout<<"six";
			   break;

		    case 7:cout<<"seven";
			   break;

		    case 8:cout<<"eight";
			   break;

		    case 9:cout<<"nine";
			   break;

		 }
		 dig/=10;
		 cout<<" ";
	    }while(dig!=0);
	 }

     };


     void main()
     {
	clrscr();
	int num;
	cout<< "\n\n Enter the number : ";
	cin>>num;

	cout<<"\n\n The number in words : ";
	digit(num);

     getch();
   }