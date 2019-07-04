#include<graphics.h>
#include<conio.h>
#include<dos.h>

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 int x=getmaxx()/2,y=getmaxy()/2;
 moveto(x,y);
 int y2,x2;
 int st=270,end=90;
 while(!kbhit())
 {
  x=getmaxx()/2;y=getmaxy()/2;
  moveto(x,y);
  for(int i=1;i<24;i++)
  {
   y=gety();
   y2=y+10;
   if(i%2==0)
    arc(x,y2,270,90,10*i);
   else
    arc(x,y,90,270,10*i);
  }
 delay(200);
 cleardevice();
 x=getmaxx()/2;
 y=getmaxy()/2;
 moveto(x,y);
 for(i=1;i<24;i++)
 {
  x=getx();
  x2=x+10;
  if(i%2==0)
   arc(x2,y,0,180,10*i);
  else
   arc(x,y,180,0,10*i);
  }
  delay(200);
  cleardevice();
  x=getmaxx()/2;y=getmaxy()/2;
  moveto(x,y);
  for(i=1;i<24;i++)
  {
   y=gety();
   y2=y+10;
   if(i%2!=0)
    arc(x,y2,270,90,10*i);
   else
    arc(x,y,90,270,10*i);
  }
 delay(200);
 cleardevice();

 }
 getch();
 closegraph();
}