#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdlib.h>


char a[100];
char d[100];
char d1[100];
void dispall(int,int);
int y2,flAG=0;
int o;
int FL=0;
char can;




void dis(int &x,int &o, char g[100])
{
 char ba[100];
 int i=0,k=0;
 i=strlen(g);
 if(i>18)
  k=0;
 strcpy(ba,g);
 outtextxy(x+175,o,g);
 while(1)
 {
  if(can==(char)27)
   return;
  if(can==(char)9||can==(char)13)
  {
   if(o==219&&can==(char)13)
    flAG=1;
   o+=100;
   if(o>420)
   {
    o=y2+30;
    cleardevice();
   }
   dispall(x,o);
   return;
  }

 else
 {
  if(can==(char)8)
  {
   i--;
   cleardevice();
   g[i]='\0';
   dispall(x,o);

   k--;
   if(i<0)
    i=0;
   if(k<0)
    k=0;
   ba[k]=' ';
   if(FL==1)
    d1[k]=' ';
  }
  else
  {
   g[i]=can;
   if(FL==1)
   {
    d1[k]='*';
    ba[k]='*';
   }
   else
    ba[k]=can;
   i++;
   k++;
  }
  if(k>=18)
  {
   for(int j=0;j<18;j++)
    ba[j]=ba[j+1];
   ba[j-1]='\0';
   d1[j-1]='\0';
   cleardevice();
   g[i]='\0';
   dispall(x,o);
   k--;
  }
  g[i]='\0';
  ba[k]='\0';
  cleardevice();
  dispall(x,o);
  outtextxy(x+175,o,ba);
  }
  can=getch();
 }
}

void bxlogin()
{
 flAG=0;
 char a1[100],d1[100];
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 int x=getmaxx()/2-200;
 o=getmaxy()/2-150;
 y2=o;
 cleardevice();
 rectangle(x,o,x+400,o+100);
 rectangle(x,o+100,x+400,o+200);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
 setcolor(RED);
 outtextxy(x+20,o+30,"USER NAME :");
 setcolor(WHITE);
 outtextxy(x+20,o+130,"PASSWORD  :");
 outtextxy(x+100,o+230,"LOGIN");
 outtextxy(x+100,o+330,"FORGOT PASSWORD??");

 o=y2+30;
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
 while(1)
 {
  if(can==(char)27)
   return;
  if(can==(char)13)
  {
   if(strlen(a)==0&& o!=419)
   { outtextxy(x+130,y2-30,"enter username");
   }
   else if(strlen(d)==0&& o!=419)
    outtextxy(x+130,y2-30,"enter password");
   if(flAG==1&&strlen(d)!=0)
    break;
   if(o==419)
    break;
  }
  else
  {
   if(can==(char)9)
   {
    o+=100;
    if(o>420)
    {
     o=y2+30;
     cleardevice();
    }
    dispall(x,o);
   }
   else
    if(y2+30==o)
    { dis(x,o,a);
     if(strlen(a)==0)
     { o=y2+30;
      dispall(x,o);
     }
    }
    else
    {
     dis(x,o,d);
     FL=1;
     if(strlen(d)==0)
     { o=y2+130;
      dispall(x,o);
     }
     FL=0;
    }
  }
 //if(flAG==1)
  //  exit(1);
	      can=getch();
 }
}

void dispall(int x,int o)
{
 rectangle(x,y2+100,x+400,y2+200);
 rectangle(x,y2,x+400,y2+100);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
 outtextxy(x+175,y2+30,a);
 outtextxy(x+175,y2+130,d1);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
 if(y2+30==o)
 {
  setcolor(RED);
  outtextxy(x+20,y2+30,"USER NAME :");
  setcolor(WHITE);
  outtextxy(x+20,y2+130,"PASSWORD  :");
  outtextxy(x+100,y2+230,"LOGIN");
  outtextxy(x+100,y2+330,"FORGOT PASSWORD??");
 }
 else if(y2+130==o)
 {
  setcolor(RED);
  outtextxy(x+20,y2+130,"PASSWORD  :");
  setcolor(WHITE);
  outtextxy(x+100,y2+230,"LOGIN");
  outtextxy(x+100,y2+330,"FORGOT PASSWORD??");
  outtextxy(x+20,y2+30,"USER NAME :");
 }
 else if(y2+230==o)
 {
  setcolor(RED);
  outtextxy(x+100,y2+230,"LOGIN");
  setcolor(WHITE);
  outtextxy(x+20,y2+130,"PASSWORD  :");
  outtextxy(x+100,y2+330,"FORGOT PASSWORD??");
  outtextxy(x+20,y2+30,"USER NAME :");
 }
 else
 {
  setcolor(RED);
  outtextxy(x+100,y2+330,"FORGOT PASSWORD??");
  setcolor(WHITE);
  outtextxy(x+100,y2+230,"LOGIN");
  outtextxy(x+20,y2+130,"PASSWORD  :");
  outtextxy(x+20,y2+30,"USER NAME :");
 }
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
}
