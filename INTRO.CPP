void border()
{
 void asterick(int,int,int);
 void asterick1(int,int,int);
 void bor(int);
 void dis(int);
 clrscr();
 int gd=DETECT,gm,i=0;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
 outtextxy(240,55,"CS PROJECT");
 rectangle(0,0,getmaxx(),getmaxy());
 rectangle(30,30,getmaxx()-30,getmaxy()-30);
 setfillstyle(CLOSE_DOT_FILL,BLUE);
 floodfill(39,39,15);
 settextstyle(1,0,1);
 while(i<=15)
 {
  setfillstyle(XHATCH_FILL,i);
  floodfill(2,9,15);
  setcolor(i);
  settextstyle(GOTHIC_FONT,HORIZ_DIR,8);
  outtextxy(105,145,"COMPIDEA");
  if(i%2==0)
   setcolor(WHITE);
  else
   setcolor(BLUE);

  settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
   outtextxy(130,350,"press any key to continue!!");
  setcolor(i);

  for(int j=0;j<3;j++)
  line(100,245+j*2,540,245+j*2);

  if(i%2==0)
  {
   asterick(65,120,25);
   asterick(65,270,25);
   asterick1(65,120,6);
   asterick1(570,120,6);
  }
  else
  {
   asterick(75,120,24);
   asterick(75,270,24);
   asterick1(65,130,6);
   asterick1(570,130,6);
  }
  delay(200);
  i++;
 }

 setcolor(YELLOW);
 settextstyle(GOTHIC_FONT,HORIZ_DIR,8);
 outtextxy(105,145,"COMPIDEA");
 setcolor(WHITE);
 for(int j=0;j<3;j++)
 line(100,245+j*2,540,245+j*2);
 setcolor(WHITE);
 settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
 outtextxy(130,350,"press any key to continue!!");


 i=0;
 while(!kbhit())
 {
  setcolor(i++);
  if(i==15)
   i=0;
  if(i%2==0)
  {
   asterick(65,120,25);
   asterick(65,270,25);
   asterick1(65,120,6);
   asterick1(570,120,6);
  }
  else
  {
   asterick(75,120,24);
   asterick(75,270,24);
   asterick1(65,130,6);
   asterick1(570,130,6);
  }
  delay(100);
 }
 getch();
}
void asterick(int a,int b,int c)
{
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
 moveto(a,b);
 for(int j=0;j<c;j++)
 outtext("* ");
}
void asterick1(int a,int b,int c)
{
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
 for(int j=0;j<c;j++)
 {
  moveto(a,b);
  outtext("*");
  b+=25;
 }
}
