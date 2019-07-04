#include<graphics.h>
#include<conio.h>
void main()
{
 int gd=
 DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
// rectangle(0,0,getmaxx(),getmaxy());
// rectangle(30,30,getmaxx()-30,getmaxy()-30);
 setfillstyle(INTERLEAVE_FILL,RED);
 floodfill(3,3,15);
/// setfillstyle(CLOSE_DOT_FILL,GREEN);
// floodfill(39,39,15);
 getch();
 closegraph();
}