#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>

int bs;

void displayall()
{
 int a=100;
 void DISP(int );

 DISP(bs);
 //amused 8-10
 circle(a,150,30);
 arc(a-10,145,10,170,8);
 arc(a+10,145,10,170,8);
 arc(a,150,220,320,20);
 line(a-15,163,a+15,163);
 outtextxy(a-10,200," 5");
 //good 6-8
 circle(2*a,150,30);
 arc(2*a-10,145,10,170,8);
 arc(2*a+10,145,10,170,8);
 arc(2*a,150,220,320,20);
 outtextxy(2*a-10,200," 4");
 //ok 4-6
 circle(3*a,150,30);
 arc(3*a-10,145,10,170,8);
 arc(3*a+10,145,10,170,8);
 line(3*a-15,165,3*a+15,165);
 outtextxy(3*a-10,200," 3");
 //summar 2-4
 circle(4*a,150,30);
 line(4*a-15,140,4*a-5,140);
 line(4*a+5,140,4*a+15,140);
 line(4*a-15,165,4*a+15,165);
 outtextxy(4*a-10,200," 2");
 //worst   0-2
 circle(5*a,150,30);
 line(5*a-20,140,5*a-5,143);
 line(5*a+5,143,5*a+20,140);
 arc(5*a,170,10,170,10);
 outtextxy(5*a-10,200," 1");
}

int smile(int boss)
{
 int i=0,ax=0,by=160;
 int a=100;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 int sel=5;
 char ch,ch1;
 bs=boss;
 displayall();
 while(1)
 {
  ch1=getch();
  if(ch1==(char)13)
   break;
  else
   ch=getch();

  if(ch=='K')
  {
   if(ax==0)
    ax=600;
   ax-=120;
   moveto(ax,by);
  }
  else if(ch=='M')
  {
   ax+=120;
   if(ax==720)
    ax=120;
   moveto(ax,by);
  }
  if(ax==120)
   sel=1;
  else if(ax==240)
   sel=2;
  else if(ax==360)
   sel=3;
  else if(ax==480)
   sel=4;
  else
   sel=5;


 if(sel==2)
 {
  while(!kbhit())
  {
   i++;
   cleardevice();
   displayall();
   circle(2*a,150,30);
   arc(2*a-10,145,10,170,8);
   arc(2*a+10,145,10,170,8);
   arc(2*a,150,220,320,20);
   outtextxy(2*a-10,200," 4");
   if(i%2==0)
   {
    circle(2*a-10,150,5);
    circle(2*a+10,150,5);
    circle(2*a-10,150,2);
    circle(2*a+10,150,2);
    delay(500);
   }
   else
   {
    outtextxy(2*a+8,148,"-");
    outtextxy(2*a-12,148,"-");
    delay(500);
   }
  }
 }
 else if(sel==1)
 {
  i=0;
  while(!kbhit())
  {
   i++;
   cleardevice();
   displayall();
   circle(a,150,30);
   arc(a-10,145,10,170,8);
   arc(a+10,145,10,170,8);
   arc(a,150,220,320,20);
  line(a-15,163,a+15,163);

   outtextxy(a-10,200," 5");
   if(i%2==0)
   {
    circle(a-10,150,5);
    circle(a+10,150,5);
    circle(a-10,150,2);
    circle(a+10,150,2);
    delay(500);
   }
   else
   {
    outtextxy(a+8,148,"-");
    outtextxy(a-12,148,"-");
    delay(500);
   }
  }
 }
 else if(sel==5)
 {
  i=0;
  while(!kbhit())
  {
   i++;
   cleardevice();
   displayall();
   circle(5*a,150,30);
   line(5*a-20,140,5*a-5,143);
   line(5*a+5,143,5*a+20,140);
   arc(5*a,170,10,170,10);
   outtextxy(5*a-10,200," 1");
   if(i%2!=0)
   {
    circle(5*a-10,150,5);
    circle(5*a+10,150,5);
    delay(500);
   }
   else
   {
    circle(5*a-10,150,3);
    circle(5*a+10,150,3);
    delay(500);
   }
  }
 }
 else if(sel==4)
 {
  i=0;
  while(!kbhit())
  {
   i++;
   cleardevice();
   displayall();
   circle(4*a,150,30);
   line(4*a-15,140,4*a-5,140);
   line(4*a+5,140,4*a+15,140);
   line(4*a-15,165,4*a+15,165);
   outtextxy(4*a-10,200," 2");
   if(i%2==0)
   {
    circle(4*a-10,150,5);
    circle(4*a+10,150,5);
    circle(4*a-10,150,2);
    circle(4*a+10,150,2);
    delay(500);
   }
   else
   {
    outtextxy(8+4*a,148,"-");
    outtextxy(4*a-12,148,"-");
    delay(500);
   }
  }
 }
 else if(sel==3)
 {
  i=0;
  while(!kbhit())
  {
   i++;
   cleardevice();
   displayall();
   circle(3*a,150,30);
   arc(3*a-10,145,10,170,8);
   arc(3*a+10,145,10,170,8);
   line(3*a-15,165,3*a+15,165);
   outtextxy(3*a-10,200," 3");
   if(i%2==0)
   {
    circle(3*a-10,150,5);
    circle(3*a+10,150,5);
    circle(3*a-10,150,2);
    circle(3*a+10,150,2);
    delay(500);
   }
   else
   {
    outtextxy(8+3*a,148,"-");
    outtextxy(3*a-12,148,"-");
    delay(500);
   }
  }
 }
 }
 switch(sel)
 {
  case 1: return 5;
  case 2: return 4;
  case 3: return 3;
  case 4: return 2;
  case 5: return 1;
 }
 closegraph();
}

void DISP(int sel)
{
 int a=400;
 setcolor(WHITE);

 outtextxy(50,3,"Use arrow keys to select the smile");
  outtextxy(50,20,"PRESS ENTER TO RATE");

 outtextxy(250,350,"CURRENT RATING:");
 if(sel==5)
 {
  circle(a,150+250,30);
  arc(a-10,145+250,10,170,8);
  arc(a+10,145+250,10,170,8);
  arc(a,150,220+250,320,20);
  line(a-15,163+250,a+15,163+250);
  outtextxy(a-10,200+250," 5");
  circle(a-10,150+250,5);
  circle(a+10,150+250,5);
  circle(a-10,150+250,2);
  circle(a+10,150+250,2);
  outtextxy(a+8,148+250,"-");
  outtextxy(a-12,148+250,"-");
 }
 else if(sel==4)
 {
  circle(a,150+250,30);
  arc(a-10,145+250,10,170,8);
  arc(a+10,145+250,10,170,8);
  arc(a,150+250,220,320,20);
  outtextxy(a-10,200+250," 4");
  circle(a-10,150+250,5);
  circle(a+10,150+250,5);
  circle(a-10,150+250,2);
  circle(a+10,150+250,2);
  outtextxy(a+8,148+250,"-");
  outtextxy(a-12,148+250,"-");
 }
 else if(sel==1)
 {
  circle(a,150+250,30);
  line(a-20,140+250,a-5,143+250);
  line(a+5,143+250,a+20,140+250);
  arc(a,170+250,10,170,10);
  outtextxy(a-10,200+250," 1");
  circle(a-10,150+250,5);
  circle(a+10,150+250,5);
  circle(a-10,150+250,3);
  circle(a+10,150+250,3);
 }
 else if(sel==2)
 {
  circle(a,150+250,30);
  line(a-15,140+250,a-5,140+250);
  line(a+5,140+250,a+15,140+250);
  line(a-15,165+250,a+15,165+250);
  outtextxy(a-10,200+250," 2");
  circle(a-10,150+250,5);
  circle(a+10,150+250,5);
  circle(a-10,150+250,2);
  circle(a+10,150+250,2);
  outtextxy(8+a,148+250,"-");
  outtextxy(a-12,148+250,"-");
 }
 else if(sel==3)
 {
  circle(a,150+250,30);
  arc(a-10,145+250,10,170,8);
  arc(a+10,145+250,10,170,8);
  line(a-15,165+250,a+15,165+250);
  outtextxy(a-10,200+250," 3");
  circle(a-10,150+250,5);
  circle(a+10,150+250,5);
  circle(a-10,150+250,2);
  circle(a+10,150+250,2);
  outtextxy(8+a,148+250,"-");
  outtextxy(a-12,148+250,"-");
 }
}