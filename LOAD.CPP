#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include"random.cpp"

void randm();

char ce[][200]={"connecting to server...","authenticating...","http:\\\\compideagurus.cpp"};

void loading()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 setfillstyle(CLOSE_DOT_FILL,BLUE);
 bar(getmaxx()/2-100,getmaxy()/2-20,getmaxx()/2+100,getmaxy()/2+20);
 setfillstyle(CLOSE_DOT_FILL,RED);
 for(abc=0;abc<200;abc++)
 {
  if(getmaxx()/2-100+abc==getmaxx()/2+100)
   break;
  setfillstyle(CLOSE_DOT_FILL,RED);
  bar(getmaxx()/2-100,getmaxy()/2-20,getmaxx()/2-100+abc,getmaxy()/2+20);
  makrand(ce[random(3)]);
 }
 closegraph();
}
