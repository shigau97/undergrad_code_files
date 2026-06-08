#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
float x1,x2,y1,y2,x,y,h,k,p;
float m;
clrscr();
cout<<"Enter start and end pt of line"<<endl;
cin>>x1>>y1>>x2>>y2;
m=(x2-x1)/(y2-y1);
h=getmaxx()/2;
k=getmaxy()/2;
putpixel(x+h,y+k,1);
x=x1;
y=y1;
setbkcolor(WHITE);
putpixel(x+h,y+k,1);
while(x<=x2 && y<=y2)
{
if (m==0)
{
putpixel((x+1)+h,y+k,1);
}
 if(m<1)
{p=2*(y2-y)-(x2-x);
  if(p>0)
  {
  putpixel((x+1)+h,(y+1)+k,1);
  }
  else
  {
  putpixel(x+1+h,y+k,1);
  }
   }
   if(m>1)
  {p=2*(x2-x)-(y2-y);
  if(p>0)
  { putpixel((x+1)+h,(y+1)+k,1);
    }
    else
    {  putpixel(x+h,(y+1)+k,1);
    }

    }
    }getch();
    closegraph();
    }