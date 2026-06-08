#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
int gd=DETECT, gm;
int x1,x2,y1,y2,x,y,dy,dx,p;
float m;
initgraph(&gd,&gm,"C:/TC/BIN");
clrscr();
printf("Enter the first coordinates: ");
scanf("%d%d",&x1,&y1);
printf("Enter the second coordinates: ");
scanf("%d%d",&x2,&y2);
dy=y2-y1;
dx=x2-x1;
m=dy/dx;
x1+=getmaxx()/2;
x2+=getmaxx()/2;
y1+=getmaxy()/2;
y2+=getmaxy()/2;
if(m<1){
  p=2*dy-dx;
  x=x1;
  y=y1;
  putpixel(x,y,0);
  while(x<=x2){
    x+=1;
    if(p<=0)
      p+=2*dy;
    else{
      y++;
      p=p+2*dy-2*dx;}
    putpixel(x,y,0);
  } }
else{
  p=2*dx-dy;
  x=x1;
  y=y1;
  putpixel(x,y,5);
  while(x<=x2){
    x+=1;
    if(p<=0)
      p=p+2*dx;
    else{
      y++;
      p=p+2*dx-2*dy;}
    putpixel(x,y,5);
  }  }
getch();
}