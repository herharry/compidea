#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdlib.h>


char a[100];
char d[100];
void dispall(int,int);
char can='a';


int o1,o;
int FLAG=0;

void dis(int &x,int &o, char g[100])
{
 char ba[100];
 int i=0,k=0;
 i=strlen(g);
 if(i>18)
  k=0;
 strcpy(ba,g);
 while(1)
 {
  if(can==(char)9||can==(char)13)
  {
   if(o==219&&can==(char)13)
    FLAG=1;
   o+=100;
   if(o>420)
   {
    o=o1+30;
    cleardevice();
   }
   dispall(x,o);
   return;
  }

 else
 {
  if(o==119||o==219)
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
  }
  else
  {
   if(o==119||o==219)
   {
    g[i]=can;
    ba[k]=can;
    i++;
    k++;
   }
  else
  cout<<o;
  }
  if(k>=18)
  {
   for(int j=0;j<18;j++)
    ba[j]=ba[j+1];
   ba[j-1]='\0';
   cleardevice();
   g[i]='\0';
   dispall(x,o);
   k--;
  }
  g[i]='\0';
  ba[k]='\0';
  dispall(x,o);
 }
  can=getch();
 }
}

void bxlogin()
{

 int x=getmaxx()/2-200;
 o=getmaxy()/2-150;
 o1=o;
 setcolor(YELLOW);
 rectangle(x,o,x+400,o+100);
 rectangle(x,o+100,x+400,o+200);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
 setcolor(RED);
 outtextxy(x+20,o+30,"USER NAME :");
 setcolor(WHITE);
 outtextxy(x+20,o+130,"PASSWORD :");
 outtextxy(x+100,o+230,"LOGIN");
 outtextxy(x+100,o+330,"FORGOT PASSWORD??");

 o=o1+30;
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
 while(can=getch())
 {
  if(can==(char)13)
  {
   if(strlen(a)==0)
   {
    cleardevice();
    outtextxy(250,50,"ENTER USER NAME");
    strcpy(a,"\0");
    dispall(x,o);
   }
   else if(strlen(d)==0 && o!=419)
   {
    cleardevice();
    outtextxy(250,50,"ENTER PASSWORD");
    strcpy(d,"\0");
    dispall(x,o);
   }
   else if(FLAG==1)
    break;
   else
     break;
   }
  else
  {
  if(can==(char)9)
  {
   o+=100;
   if(o>420)
   {
    o=o1+30;
    cleardevice();
   }
   dispall(x,o);
  }
  else
   if(o1+30==o)
    dis(x,o,a);

   else
    dis(x,o,d);

  }

 }
}

void dispall(int x,int o)
{
 char d1[100];
 for(i=0;i<strlen(d);i++)
  d1[i]='*';
 d1[i]='\0';
 rectangle(x,o1+100,x+400,o1+200);
 rectangle(x,o1,x+400,o1+100);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
 outtextxy(x+175,o1+30,a);
 settextstyle(GOTHIC_FONT,HORIZ_DIR,3);
 outtextxy(x+175,o1+130,d1);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
 if(o1+30==o)
 {
  setcolor(RED);
  outtextxy(x+20,o1+30,"USER NAME :");
  setcolor(WHITE);
  outtextxy(x+20,o1+130,"PASSWORD :");
  outtextxy(x+100,o1+230,"LOGIN");
  outtextxy(x+100,o1+330,"FORGOT PASSWORD??");
 }
 else if(o1+130==o)
 {
  setcolor(RED);
  outtextxy(x+20,o1+130,"PASSWORD :");
  setcolor(WHITE);
  outtextxy(x+100,o1+230,"LOGIN");
  outtextxy(x+100,o1+330,"FORGOT PASSWORD??");
  outtextxy(x+20,o1+30,"USER NAME :");
 }
 else if(o1+230==o)
 {
  setcolor(RED);
  outtextxy(x+100,o1+230,"LOGIN");
  setcolor(WHITE);
  outtextxy(x+20,o1+130,"PASSWORD :");
  outtextxy(x+100,o1+330,"FORGOT PASSWORD??");
  outtextxy(x+20,o1+30,"USER NAME :");
 }
 else
 {
  setcolor(RED);
  outtextxy(x+100,o1+330,"FORGOT PASSWORD??");
  setcolor(WHITE);
  outtextxy(x+100,o1+230,"LOGIN");
  outtextxy(x+20,o1+130,"PASSWORD :");
  outtextxy(x+20,o1+30,"USER NAME :");
 }
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
}
