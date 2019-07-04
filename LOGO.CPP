#include<graphics.h>
#include<conio.h>
#include<dos.h>
void logo()
{
/* int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 cleardevice();                        */
 rectangle(250,150-75,370,250-75);
 rectangle(260,160-75,360,240-75);
 arc(310,200-75,-64,250,20);
 for(int i=0;i<3;i++)
  rectangle(300,220.5+i-75,321,224+i-75);
 rectangle(300,225.5-75,321,229-75);

 rectangle(290,250-75,330,260-75);
 rectangle(240,260-75,380,290-75);
 rectangle(255,271-75,305,279-75);
 circle(355,275-75,5);

 line(302,200-75,311,220.5-75);
 line(317,200-75,311,220.5-75);
 line(302,200-75,317,200-75);
 circle(getmaxx()-115,268,5);
 line(getmaxx()-116,273,getmaxx()-119,282);


// getch();
// closegraph();
}