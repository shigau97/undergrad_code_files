#include<iostream.h>
#include<conio.h>
#include<graphic.h>
#include<math.h>
voide main()
{
clrscr();
int gd=DETECT,gm;
intgraoh(&gd,&gm,"\\TC\\BGI");
int x1,x2,y1,y2;
cout<<"enter the starting point of line:\n";
cin >>x1>>y1;
cout<<"enter the ending point of line/n";
cin>>x2>>y2;
int midx,midy;
midx=getmaxx()/2;
midy=getmaxy()/2;
setcolor(RED);
line(0,midy,getmaxx(),midy);
line(midx,0,midx,getmaxy());
int dx,dy,p0,pk,pk2,x,y,xsend,ysend;
//code
float m;
m=(float)(y2-y1)/(float)(x2-x1);
dx=abs(x2-x1);
dy=abs(y2-y1);
if(m>0 && m<1)
{
 p0=2*dy-dx;
 pk=p0;
  if(x1<x2)
  {
   x=x1;
   y=y1;
   xend=x2;
  }
  else
  {
   x=x2;
   y=y2;
   xend=x1;
   }
    putpixel(midx+x,midy-y,WHITE);
  while(x!=xend)
  {
   x=x++;
    if(pk>0)
     {
      pk2=pk+2*dy-2*dx;
      y=y+1;
      }
     else
     {
       pk2=pk+2*dy;
      }
     pk=pk2;
     putpixel(midx+x,mid-y,WHITE);
   }
}

////////////

   else if(m>1)
    {
      p0=2*dx-dy;
      pk=p0;
      if(y1<y2)
       {
	x=x1;
	y=y1;
	yend=y2;
	}
       else
       {
       x=x2;
       y=y2;
       yend=y1;
       }
      putpixel(midx+x,midy-y,WHITE);
      while(y!=yend);
      {
       y=y++;
       if(pk>0)
       {
	pk2=pk+2*dx-2*dy;
	x=x++;
       }
       else
       {
       pk2=pk+2*dx;
       }
       pk=pk2;
       putpixel(mid+x,midy-y,WHITE);
    }
}

////////////////
else if(m<-1)
{
 p0=2*dy-dx;
 pk=p0;
  if(y2-y1<0)
  {
   x=x2;
   y=y2;
   yend=y1;
  }
  else if(x2-x1<0)
  {
   x=x2;
   y=y2;
   yend=y1;
   }
  putpixel(midx+x,midy-y,WHITE);
  while(y!=yend)
  {
   y=y+yk;
   if(pk>0)
   {
    pk2=pk+2*dx-dy;
    x=x--;
    }
    else
    {
    pk2=pk+2*dx;
    }
    pk=pk2;
    putpixel(midx+x)

