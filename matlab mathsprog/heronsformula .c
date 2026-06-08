#include<stdio.h>
#include<conio.h>
#include<math.h>
{
	float a,b,c,s,i;
	clrscr();
	printf("\n Enter the sides : ");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	i=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\n Area of tringle : %f sq. units",i);
	printf("\n\n\n Made by : Tushar Yadav");
	getch();
}
