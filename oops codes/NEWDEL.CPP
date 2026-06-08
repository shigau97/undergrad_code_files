#include<iostream.h>
#include<conio.h>

void main()
{
   clrscr();
   int n,*ptr,i;


   cout<<"\n\n Enter the size of array : ";
   cin>>n;

   ptr=new int[n];

   cout<<" Enter the array : ";
   for(i=0;i<n;i++)
   cin>>*(ptr+i);

   cout<<"\n\n\n Elements of array are : ";
   for(i=0;i<n;i++)
   cout<<*(ptr+i)<<" ";

   delete []ptr;

   getch();

}