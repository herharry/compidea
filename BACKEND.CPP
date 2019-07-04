#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include<stdio.h>
void exiter()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 rectangle(0,0,getmaxx(),getmaxy());
 rectangle(15,15,getmaxx()-15,getmaxy()-15);
 setfillstyle(CLOSE_DOT_FILL,BLUE);
 floodfill(39,39,15);
 settextstyle(1,0,8);
 outtextxy(100,100,"THANK YOU");
 settextstyle(1,0,4);
 outtextxy(180,228,"HOPE U LIKED IT !");
 settextstyle(1,0,4);
 outtextxy(250,268,"SHARE IT");
 int i=0;
 int a=245,b=340;
 rectangle(a,b,a+30,b+30);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
 setfillstyle(SOLID_FILL,WHITE);
 floodfill(a+5,b+10,15);
 setcolor(RED);
 outtextxy(a+5,b,"g");
 settextstyle(SIMPLEX_FONT,HORIZ_DIR,1);
 outtextxy(a+15,b,"+");
 setcolor(WHITE);
 a+=60;
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
 rectangle(a,b,a+30,b+30);
  setfillstyle(SOLID_FILL,WHITE);
 floodfill(a+5,b+10,15);
 setcolor(BLUE);
 outtextxy(a+12,b+3,"f");
 a+=60;
 setcolor(WHITE);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
 rectangle(a,b,a+30,b+30);
 floodfill(a+5,b+10,WHITE);
 setcolor(BLUE);
 outtextxy(a+7,b,"in");
 setcolor(WHITE);

 while(!kbhit())
 {
  delay(200);
  setfillstyle(XHATCH_FILL,i++);
  floodfill(2,9,15);
  if(i>=15)
   i=0;
 }
 getch();
 closegraph();
 exit(1);
}