#include<graphics.h>
#include "impfiles.cpp"
#include<time.h>
#include"intro.cpp"
#include"backend.cpp"
#include"rater.cpp"
#include"logo.cpp"
#include"page1.cpp"
#include"lg.cpp"
#include"load.cpp"

int gdriver = DETECT, gmode,var;
int pas=0;


void main()
{
 clrscr();
 void border();
 border();
 access.log_in();

 getch();
 closegraph();

}




char AS[][30]={"MEMBER","GUEST","CREATE NEW ACCOUNT","EXIT"};

void pro_cesfunction :: log_in()
{
 //TO ALLOW USER TO LOGIN AS A MEMBER OR GUEST

 cleardevice();
 pas_check=0;

 settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);

 ax=160;
 by=120;
 var=by;

a:
{
 cleardevice();
 setcolor(GREEN);
 rectangle(0,0,getmaxx(),getmaxy());
 rectangle(30,30,getmaxx()-30,getmaxy()-30);

 settextstyle(SCRIPT_FONT,HORIZ_DIR,5);

 outtextxy(65,20,"Use arrow keys for accessing.");
 line(63,80,593,80);

// settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
 for(i=0;i<4;i++)
 {
  moveto(160,i*40+160);
  if((by-120)/40==i)
  {
   setcolor(RED);
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
   outtext(AS[i]);

  }
  else
  {
   settextstyle(SIMPLEX_FONT,HORIZ_DIR,3);
   setcolor(YELLOW);
   outtext(AS[i]);
  }
 }
 moveto(ax,by);
 arrow(4,1);


 if(stop==0)
  goto a;
}


 if((by-120)/40==0)
  strcpy(member,"member");

 else if((by-120)/40==1)
  strcpy(member,"guest");

 else if((by-120)/40==2)
 {
  closegraph();
  strcpy(member,"account");
 }

 else
  exiter();


 if(strcmpi(member,"member")==0)
 {
  cleardevice();
  call:
  {
   bxlogin();
   strcpy(login.name,a);
   strcpy(login.pass,d);
   if(can==(char)27)
    log_in();
  ifstream retrieve(login.name);
  retrieve.getline(er.pass,50);
  retrieve.getline(er.color,50);
  retrieve.getline(er.book,50);
  retrieve.getline(er.nick,50);
  retrieve.close();
  ifstream retriever(login.name);

  if(retriever.fail()&&strlen(a)!=0)
  {
   outtextxy(250,50,"INCORRECT USER NAME");
   delay(1000);
   strcpy(a,"\0");
   goto call;
  }

 retriever.close();

   if(o==419)
   {
/*    if(strlen(a)==0&&!retriever.fail())
    {
     outtextxy(250,50,"ENTER USER NAME");
     delay(1000);
     strcpy(a,"\0");
     goto call;
    }   */
   closegraph();
   clrscr();
   cout<<"\n\n\n\nFORGOT PASSWORD?";
   ax=2;
   by=wherey()+3;
   back_exit(by,"YES","NO");

    if(top==1)
    {
	cout<<"\n\n\nAnswer the set of questions for the verification of your password";

	cout<<"\n\nWHAT IS YOUR FAVOURITE COLOUR\t\t";
	gets(ch);
	if(strcmpi(er.color,ch)==0)
	  pas_check++;
	cout<<"\nWHAT IS YOUR FAVOURITE BOOK    \t\t";
	gets(ch);
	if(strcmpi(er.book,ch)==0)
	  pas_check++;
	cout<<"\nWHAT IS YOUR NICK NAME         \t\t";
	gets(ch);
	if(strcmpi(er.nick,ch)==0)
	  pas_check++;
	if( pas_check==3)
	{
	 cout<<"\nyour password is:             \t\t";

	 cout<<er.pass;
	 getch();
	 load();
	 process();
	}
	else
	{ cout<<"HACKERS PROHIBITED";
	    }
     }
     else
      pas=1;

      if(pas==1)
      {
       pas=0;
       int gd=DETECT,gm;
       initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
       goto call;
      }
      else
      {
 ax=2;
 by=wherey()+2;
 count=1;
 getch();
 exiter();
}
    }

   else
   {

 if(strcmp(er.pass,login.pass)==0)
  {
   closegraph();
   load();
   pas_check=3;
   clrscr();
  }
  else
  {
   outtextxy(200,100,"INCORRECT PASSWORD");
   strcpy(d,"\0");
   delay(1000);
   goto call;
  }
 }}
 }


 else if(strcmpi(member,"account")==0)
 {
  newmember();
  load();
 }
 else if(strcmpi(member,"guest")==0)
  cout<<"WARNING: you cannot have full access in this page";

 if(strcmpi(member,"guest")==0 || pas_check==3 ||  strcmpi(member,"account")==0)
  process();

}




void pro_cesfunction :: process()
{
 //CHECKING THE PROCESS

/* front();
 getch();
  */
 initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
 stop=1;
 count=1;
 ax=240;
 by=80;

 int num=8;
 if(strcmpi(member,"guest")==0)
 {
  strcpy(pro[3],"MEMBERSHIP");
  strcpy(pro[4],"BACK");
  strcpy(pro[5],"EXIT");
  strcpy(pro[6],"\0");
  strcpy(pro[7],"\0");
  num=6;
 }
 else
 {
	strcpy(pro[0],"SEARCH");
	strcpy(pro[1],"HELP");
	strcpy(pro[2],"ABOUT");
	strcpy(pro[3],"EDIT");
	strcpy(pro[4],"HISTORY");
	strcpy(pro[5],"PASSWORD");
	strcpy(pro[6],"LOG OUT");
	strcpy(pro[7],"EXIT");
 }

 var=by;

 goto b;

 b:
 {

 cleardevice();
 setcolor(GREEN);
 rectangle(0,0,getmaxx(),getmaxy());
 rectangle(30,30,getmaxx()-30,getmaxy()-30);
 for(i=0;i<num;i++)
 {
  moveto(270,i*40+var);
  if((by-var)/40==i)
  {
   setcolor(RED);
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
   outtext(pro[i]);
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
  }
  else
  {
   setcolor(YELLOW);
   outtext(pro[i]);
  }
 }



 moveto(ax-1,by);

 arrow(num,2);

 if(stop==0)
  goto b;
 }



 if(by==var)
 {
  closegraph();
  clrscr();
  fsearch();
 }
 else if(by==var+40)
 {
  closegraph();
  clrscr();
  fhelp();
 }
 else if(by==var+80)
 {
  closegraph();
  clrscr();
  fabout();
 }
 else if(by==var+120)
 {
  closegraph();
  clrscr();

  if(strcmpi(member,"guest")==0)
   newmember();
  else
   fedit();
 }
 else if(by==var+160)
 {
  if(strcmpi(member,"guest")==0)
  {
   clrscr();
   count=1;
   log_in();
  }
  else
  {
   closegraph();
   clrscr();
   fhistory();
  }
 }
 else if(by==var+200)
 {
  if(strcmpi(member,"guest")==0)
   exiter();
  else
  {
   closegraph();
   clrscr();
   fpassword();
  }


 }
 else if(by==var+240)
 {
  count=1;
  strcpy(a,"\0");
  strcpy(d,"\0");
  log_in();
 }

 else
  exiter();

}





void pro_cesfunction :: fhelp()
{
 //FOR ANY HELP

  int j;

  load();

 cout<<"\n\ncompidea is a encyclopedia on computers especially on c++.\nOne can SEARCH on the topics or CREATE/EDIT ";
 cout<<"own topics.  Parental control:  They can check on compedia's history\n";
 cout<<"FOR ANY MORE DETAILS PLS CONTACT OUR HEAD OFFICE";
 getch();
 ax=2;
 by=8;
 count=1;
 back_exit(by,"BACK","EXIT");
}





void pro_cesfunction :: fabout()
{
 //TO SEE THE DEVELOPER OF THE PROGRRAM

   int j;

  load();

  cout<<"the page was uploaded on 27th november 2014.\n\nDEVELOPER:\n    Ram\n    Suriya\n    Vignesh\n    Seetha Raman";

 ax=2;
 by=8;
 count=1;
 back_exit(by,"BACk","EXIT");
}





void pro_cesfunction :: fedit()
{
 //TO ADD NEW FILE OR EDIT EXISTING FILE

 char add[100],info[5000];
 clrscr();
 cout<<"enter the name of the topic you want to add/edit to the search list";
  gets(add);

 ifstream opener(add);

 if (opener.fail())
 {
  ofstream adder;
  adder.open(add);

  cout<<"enter information";
   gets(info);

  adder<<info;

  cout<<"your file was successfully created";

  adder.close();

  void updater(char[]);
  updater(add);
  opener.close();
 }

 else
 {
  opener.close();
  page(add);
 }

 ax=2;
 by=8;
 count=1;
 back_exit(by,"BACK","EXIT");

}

char* srch_bx()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 logo();
 rectangle(80,175+75,getmaxx()-100,250+40);
 char a[50],b[50];
 int i=0,k=0;
 char c='a';

 settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
 while(c!=(char)13)
 {
  c=getch();
  if(c==(char)8)
  {
   cleardevice();
   logo();
   rectangle(80,175+75,getmaxx()-100,250+40);
   i--;
   k--;
   if(i<0)
    i=0;
   if(k<0)
    k=0;
  }
  else
  {
   a[i]=c;
   b[k]=c;
   i++;
   k++;
  }
  if(k>=18)
  {
   for(int j=0;j<18;j++)
    b[j]=b[j+1];
   b[j-1]='\0';
   cout<<b;
   cleardevice();
   logo();
   rectangle(80,175+75,getmaxx()-100,250+40);
   k--;
  }
  a[i]='\0';
  b[i]='\0';
  outtextxy(205,258,b);
 }
 closegraph();
 return a;
}





void pro_cesfunction ::  fsearch()
{
 //TO SEARCH FOR THE ENTERED WORD


 char* srch_bx();
 strcpy(src,srch_bx());

 if(guest==3)
 {
  cout<<"TIME OUT: PLEASE LOGIN OUR WEBSITE FOR FURTHER ACCESS";
  getch();
  exit(1);
 }

 if(strcmpi(member,"guest")==0)
  guest++;

 else
 {
  ofstream HISTORY;
  HISTORY.open(login.name,ios::app);
  HISTORY<<"\n"<<src;

  HISTORY.close();
	 }

 cout<<"\n\n\n\n\nThe entered word is searched in compeida............\n";


 search_engine(src);
 closegraph();
 cout<<"\n\n\n\n";

 ax=2;
 by=wherey()-2;
 count=1;
 back_exit(by,"BACK","EXIT");


}



char SUBTOPIC[10][20];
int total=0;



void pro_cesfunction :: search_engine(char obj[100])
{
 char sub[]={"SUBTOPICS:"};
 corect=1;
 top=0;
 char obj2[20];
 strcpy(obj2,obj);
 relation(obj);

 load();
 if(corect==0)
 { if(strcmpi(obj2,obj)==0)
  {
  cout<<"DID YOU MEAN  ";
  cout<<obj;
  delay(1000);
  }
  cout<<"\nshowing results for  "<<obj<<"\n";
  delay(1000);

  ifstream fil;
  fil.open(obj);
  top=0;
  int j1=100;

  while(fil.good())
  {
   fil>>ch;
   if(top==1)
   {
    cout<<"\n"<<ch;
    strcpy(SUBTOPIC[total],ch);
    total++;
   }
   else
   {
    stop=0;
    if(stop!=1)
     cout<<' ';

    for(int k=0;k<strlen(ch);k++)
    {
     delay(j1);
     if(ch[k]=='^')
     {
      stop=1;
      cout<<"\n";
     }
     else
      cout<<ch[k];
    }

  if(strcmp(sub,ch)==0)
     top=1;
   }
   if(kbhit())
    j1=0;

  }
  if(top==1)
   subtopic();

 top=0;
 fil.close();
 getch();
 cout<<"\nDo you want to rate?";
 cout<<"\n\n\n\n\n";
 ax=2;

 by=wherey()-2;
 back_exit(by,"YES","NO");
 if(top==1)
  rate();


 }

 else
 {
  cout<<"entered word cannot be found in compedia";
  cout<<"\ndo you want to add this word to the search list";

 cout<<"\n\n\n\n\n";
 ax=2;
 by=wherey()-3;
 back_exit(by,"YES","NO");

  if(top==1)
   fedit();
 }

}






void pro_cesfunction ::  fhistory()
{
 //TO CHECK ON THE HISTORY OF COMPEDIA

 clrscr();


 char wish;

 cout<<"\nplease delete your history once in a month to save compedias memory\n";

 ifstream eve;
 eve.open(login.name);

 eve.seekg(his,ios::beg);

 i=0;
 strcpy(ch,"\0");
 while(eve.good())
 {
  eve.getline(ch,50);
  i++;
  if(i>=5)
   cout<<"\n"<<ch;
 }

 eve.close();


 cout<<"\n\n\nDELETE HISTORY\n\n\n\n\n";
 int b=wherey();
 top=0;
 stop=0;
 count=1;
 ax=2;
 by=b-3;
 back_exit(by,"YES","NO");


 if(top==1)
 {
  ofstream eve1;
  eve1.open(login.name);
  load();
  eve1<<er.pass<<"\n";
  eve1<<er.color<<"\n";
  eve1<<er.book<<"\n";
  eve1<<er.nick<<"\n";
  cout<<"your history is successfully deleted";
  eve1.close();
 }

 count=1;
 by=b-3;
 ax=2;
 back_exit(by,"BACK","EXIT");


}





void pro_cesfunction ::  fpassword()
{
 //TO MODIFY USER'S PASSWORD

 cout<<"WARNING: YOUR HISTORY WILL BE DELETED IF PASSWORD IS MODIFIED\n";
 cout<<"do you want to change your password\n\n\n\n";
 int b=wherey();
 count=1;
 top=0;
 ax=2;
 by=b-3;
 back_exit(by,"YES","NO");


 if(top==1)
 {
  char ps[100];
  ifstream f(login.name);
  user_details aj;
  f.getline(aj.pass,50);
  f.getline(aj.color,50);
  f.getline(aj.book,50);
  f.getline(aj.nick,50);
  f.close();

  clrscr();
  ofstream overwriter(login.name,ios::trunc);
  cout<<"enter your new password";
  gets(aj.pass);
  cout<<"your password was successfuly modified\n\n\n\n\n";
  overwriter<<aj.pass<<"\n";
  overwriter<<aj.color<<"\n";
  overwriter<<aj.book<<"\n";
  overwriter<<aj.nick;
  overwriter.close();
 }
 count=1;
 ax=2;
 by=wherey()+2;
 back_exit(by,"BACK","EXIT");
}





void pro_cesfunction :: newmember()
{
 //TO CREATE A NEW USER
 user_details us;
 cout<<"WARNING: Your HISTORY will be deleted when you modify your password for safety reasons";
 cout<<"enter user name";
 cin>>login.name;

 cout<<"enter password";
 cin>>us.pass;

 ofstream mem;
 mem.open(login.name);
 mem<<us.pass<<"\n";

 cout<<"your favourite colour";
 cin>>us.color;
 mem<<us.color<<"\n";

 cout<<"your favourite book";
 cin>>us.book;
 mem<<us.book<<"\n";

 cout<<"your nick name";
 cin>>us.nick;
 mem<<us.nick<<"\n";

 mem.close();

 load();
 clrscr();
 cout<<"your account has been created";
 cout<<"\nTHANKS FOR BEING A MEMBER IN OUR WEBSITE";
 getch();
 strcpy(member,"member");
 process();
}






void load()
{
 //TO DISPLAY LOADING.....
 loading();
}





void pro_cesfunction :: subtopic()
{
 //TO SEARCH FOR THE SUBTOPICS IF ANY
 char subtops[100];
 getch();
 top=0;
 cout<<"Do you want to rate?";
 cout<<"\n\n\n\n";
 by=wherey()-2;

 back_exit(by,"YES","NO");
 if(top==1)
 {
  rate();
 }
 clrscr();
 cout<<"do you want to see more on the subtopics\n\n\n\n\n\n";
 int b=wherey();
 count=1;
 top=0;
 ax=2;
 by=b-3;
 back_exit(by,"YES","NO");
 ax=3;
 by=2;
 count=1;
 stop=1;
  if(top==1)
  {
a:
{
 clrscr();
 for(j=0;j<total;j++)
 {
  gotoxy(4,2+j);
  if(by==j+2)
   textcolor(RED);
  else
   textcolor(WHITE);
  cprintf(SUBTOPIC[j]);
 }

  textcolor(WHITE);
  gotoxy(2,by);
  arrow(total,0);
  if(stop==0)
   goto a;

   for(j=2;j<total+2;j++)
  if(by==j)
   strcpy(subtops,SUBTOPIC[j-2]);

  clrscr();
  search_engine(subtops);





}
}
}





void relation(char accept[100])
{
 //TO FIND THE RELATED SEARCHES

 char word[100];

 ifstream f1;
 f1.open("topics");

 char word1[100];
 int flag=0,check=0,count=0,k=0;
 while(f1.good())
 {
  f1>>word1;

  i=strlen(word1);

  for(int j=0;j<i;j++)
  {
   if(word1[j]==accept[k])
   {
	check=0;
	k++;
	count++;
	flag--;
   }
   else
   {
	if(check>1)
	{
	 j-=check;
	 k++;
	}
	check++;
	flag++;
	count--;
   }
  }
  if(flag<=-1)
  {
   corect=0;
   strcpy(accept,word1);
   break;
  }
  check=0;
  flag=0;
  count=0;
  k=0;

 }
 if(f1.eof())
  corect=1;

 f1.close();
}



void updater(char word[100])
{

 //TO UPDATE THE ADDED NEW WORD TO THE SEARCH LIST.

 ofstream topic_updater;
 topic_updater.open("topics",ios::app);
 topic_updater<<"\n";
 topic_updater<<word;
 topic_updater.close();
}



void arrow(int cycles,int grap)
{

 char a;

 while(1)
 {
 int seconds = 10;
 int begtime;
 begtime=clock();

 _setcursortype(_NOCURSOR);

 while(!kbhit())
 {
  if(((int) clock() - begtime) / CLK_TCK >= seconds)
  {
   void screensaver();

   if(grap==1)
    screensaver();
   stop=0;
   return;
  }
 }

 a=getch();
 if(a!=(char)13)
  gett=getch();
 else
 {
  stop=1;
  break;
 }
 if(grap!=0)
 grap=40;

 if(gett=='H')
 {
  if(grap==0)
   by--;
  else
   by-=grap;
  count--;
  if(count<=0)
  {
   if(grap==0)
    by+=cycles;
   else
    by=(cycles*grap)+var-40;
   count=cycles;
  }
  if(grap==0)
   gotoxy(ax,by);
  else
   moveto(ax,by);
  stop=0;
 }
 else if(gett=='P')
 {
  if(grap==0)
   by++;
  else
   by+=grap;
  count++;
  if(count>cycles)
  {
   if(grap==0)
    by-=cycles;
   else
    by=var;
   count=1;
  }
  if(grap==0)
   gotoxy(ax,by);
  else
   moveto(ax,by);
  stop=0;
  }
 break;
 }
 if(stop==0)
 {
  sound(1000);
  delay(100);
  nosound();
  return;
 }
}


void pro_cesfunction :: back_exit(int b,char word[10],char word1[10])
{
 char words[2][9];
 strcpy(words[0],word);
 strcpy(words[1],word1);
 count=1;
 a:
 {
  for(i=b;i<b+2;i++)
  {
   gotoxy(ax,i);
   clreol();
  }
  for(i=0;i<2;i++)
  {
   gotoxy(4,b+i);
   if(i==by-b)
    textcolor(RED);
   else
    textcolor(WHITE);
    cprintf(words[i]);
  }

  gotoxy(ax,by);
  arrow(2,0);
  if(stop==0)
   goto a;
 }

 if(by==b)
 {
  if(strcmpi(word,y)==0)
   top=1;
  else
  {
   closegraph();
   process();
  }
 }
 else
 {
  if(strcmpi(word1,n)==0)
   top=0;
  else
   exiter();
 }
}

int gap=1;

void screensaver()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 setcolor(WHITE);

 count=0;

 void hyp(int,int);
 void hyp1(int,int);
 void hyp2(int,int);
 void hyp3(int,int);

 for(int j=1;j>-1;j++)
 {
 delay(250);
  if(j%16!=0)
  setfillstyle(SOLID_FILL, j);
  for(int i=0;i<=210;i+=30)
  {
     gap=i;
     hyp(639-i+30,i);
     hyp1(i,479-i);
     hyp2(i,639-i);
     hyp3(479-i,(i+30));
     if(kbhit())
     {  count=1;
	break;
     }


  }
  gap=240;
  hyp(429,240);
  if(count==1)
   break;
 }

 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
 closegraph();
 getch();
}

void hyp(int i1,int i2)
{
 for(int i=i1;i>i2;i--)
 {
 delay(1);
  bar(i,gap,i,gap+2);
  if(kbhit())
  { count=1;
    return;
  }

 }

}


void hyp1(int j1,int j2)
{
  for(int j=j1;j<j2;j++)
  {
  delay(1);
   bar(gap,j,gap+2,j);
   if(kbhit())
  { count=1;
    return;
  }

  }
}

void hyp2(int i1,int i2)
{
 for(int i=i1;i<i2;i++)
 {
  delay(1);
  bar(i,477-gap,i,479-gap);
  if(kbhit())
  { count=1;
    return;
  }

 }
}

void hyp3(int j1,int j2)
{
 for(int i=j1;i>j2;i--)
 {
  delay(1);
  bar(637-gap,i,639-gap,i);
  if(kbhit())
  { count=1;
    return;
  }

 }
}

