#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>

int abc;

struct classic{
		int c;
		char b;
	      }A[50];

void makrand(char a[])
{
 int nr=0,count=0,k;
 int i;
 nr=strlen(a);
 for(int j=0;j<nr;++j)
 {
   k=rand()%nr;
   count=0;
   for(int i=0;i<j;++i)
   if(k==A[i].c)
   {
    count++;
    j--;
   }
   if(count==0)
   {
    A[j].c=k;
    A[j].b=a[k];
   }
 }

classic temp;
for(k=0;k<nr;++k,abc++)
{
 if(getmaxx()/2-100+abc==getmaxx()/2+100)
   break;
 char da[100];
 if(strcmpi(da,a)==0)
  break;
 for(i=0;i<nr-1;++i)
 {

  if(A[i].c>A[i+1].c)
  {
    temp=A[i];
    A[i]=A[i+1];
    A[i+1]=temp;
  }
 }
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
 int a=random(100);
  if(a<90)
    a=0;
  delay(a);
  cleardevice();
  setfillstyle(CLOSE_DOT_FILL,BLUE);
 bar(getmaxx()/2-100,getmaxy()/2-20,getmaxx()/2+100,getmaxy()/2+20);
  setfillstyle(CLOSE_DOT_FILL,RED);
  bar(getmaxx()/2-100,getmaxy()/2-20,getmaxx()/2-100+abc,getmaxy()/2+20);
  for(i=0;i<nr;i++)
    da[i]=A[i].b;
  da[i]='\0';
  outtextxy(100,100,da);
}
}

