#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>

int xy[40];
int y1=0;
int cnt=0;
int bkp=0,del=0;
int flag1=0;
int ax1=1,by1=1;
int max,pg=0,pos[100];

void sme()
{
 int i=0,check=0;
 char a;
 cnt=0;
 by1=wherey();
 ax1=wherex();
 ifstream f ("temper");
 ofstream f1("stemp",ios::trunc);
 while(f.good())
 {
  f.get(a);
  check=0;
  if(pos[pg]<=f.tellg()||pg==0)
  {
   if(by1-1==i)
   {
    if(ax1+i-1==cnt)
    {
     for(int as=0;as<bkp;as++)
      f.get(a);
      f1<<a;
      check=1;
    }
   }

   if(xy[i]==cnt)
   {
    i++;
    cnt=0;
   }
   cnt++;
  }
  if(!check)
  f1<<a;
 }
 f.close();
 f1.close();
 remove("temper");
 rename("stemp","temper");
 int findpos();
 int pag=pg;
 max=findpos();
 pg=pag;
 void disp();
 disp();
 bkp=0;
}



int findpos()
{
 clrscr();
  char a;
 int i=1;
 pos[0]=0;
 ifstream f("temper");
 while(f.good())
 {
  f.get(a);
  cout<<a;
  if(a=='^')
   cout<<"\n";
  if(wherey()==23)
  {
   pos[i++]=f.tellg();
   clrscr();
  }
 }
 f.close();
 return i;
}

void disp()
{
 y1=0;
 cnt=0;
 char a;
 ifstream f("temper");
 clrscr();
 while(f.good())
 {
  f.get(a);
  if(pos[pg]<=f.tellg()||pg==0)
  {
   if(a=='^')
   {
    xy[y1]=cnt;
    y1++;
    cnt=0;
    cout<<"\n";
   }
   else
   {
    cout<<a;
    cnt++;
   }
   if(pos[pg+1]==f.tellg())
    break;
  }
 }
 f.close();
}

void pgupdwn()
{
 ax1=1,by1=1;
 int i=0;
 cout<<"\nUse arrow keys for navigation through the text.\n";
 cout<<"Press Enter to enter the new text.\n";
 cout<<"Backspace for deleting required contents.\n";

 char ch,ch1,ab[100],a;
 while(1)
 {

  ch1=getch();
  if(ch1==(char)13)
  {
  if(flag1==1)
  {
   flag1=0;
   sme();
  }
   int check=0;
   clrscr();
   i=0;
   cnt=0;
   cout<<"enter text";
   gets(ab);
   ifstream f1("temper");
   ofstream f2("stemp",ios::trunc);
   while(f1.good())
   {
    f1.get(a);
    if((pos[pg]<=f1.tellg()||pg==0)&&check==0)
    {
     if(by1-1==i)
     {
      if(ax1+i-1==cnt)
      {
       check=1;
       f2<<ab;
      }
     }

     if(xy[i]==cnt)
     {
      i++;
      cnt=0;
     }
      cnt++;


    }
    f2<<a;
   }
 f1.close();
 f2.close();
 remove("temper");
 rename("stemp","temper");
 int findpos();
 int pag=pg;
 max=findpos();
 pg=pag;
 disp();
 bkp=0;

  }

 else if(ch1==(char)27)
   return;

  else if(ch1==(char)8)
  {  cout<<ch1<<' '<<ch1;
   bkp++;
   flag1=1;
  }
 else
{  ch=getch();



  if(flag1==1)
  {
   flag1=0;
   sme();
  }
  if(ch=='H')
  {
   by1--;
   gotoxy(ax1,by1);
   if(by1<0)
    by1=1;
  }

  else if(ch=='P')
  {
   by1++;
   gotoxy(ax1,by1);
   if(by1>25)
    by1=24;
  }
  else if(ch=='K')
  {
   ax1--;
   gotoxy(ax1,by1);
   if(ax1<0)
   {
    ax1=80;
     by1--;
   }
  }
  else if(ch=='M')
  {
   ax1++;
   gotoxy(ax1,by1);
   if(ax1>80)
   {
    ax1=1;
     by1++;
   }
  }
  else if(ch==(char)83)
  {
   cout<<' ';
   del++;
  }

  else
  {
   if(ch==(char)81)
   {
     if(pg==max-1)
      pg=max-1;
     else
      pg++;
   }
   else if(ch==(char)73)
   {
    if(pg==0)
     pg=0;
    else
     pg--;
   }
   disp();
   ax1=1;by1=1;
   gotoxy(ax1,by1);
  }
 }
} }
void page(char name[100])
{
 clrscr();
 char a;
 ifstream f(name);
 ofstream f1("temper",ios::trunc);
 while(f.good())
 {
  f.get(a);
  f1<<a;
 }
 f.close();
 f1.close();


 cout<<"press escape when you finished editing";
 getch();
 char ab[100];
 max=findpos();
 clrscr();
 cout<<"Press Page Up/Down to start editing";
 pgupdwn();
 clrscr();
 cout<<"do you want to save";
 cin>>ab;
 if(strcmpi(ab,"yes")==0)
 {
  remove(name);
  rename("temper",name);
 }
 getch();
}

