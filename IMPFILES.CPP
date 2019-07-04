#include<conio.h>
#include<fstream.h>
#include<ctype.h>
#include<string.h>
#include<dos.h>
#include<process.h>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip.h>

int i,j;

class pro_cess
{
 protected:
   char pro[8][20];

 public:
   pro_cess()
   {
	strcpy(pro[0],"SEARCH");
	strcpy(pro[1],"HELP");
	strcpy(pro[2],"ABOUT");
	strcpy(pro[3],"EDIT");
	strcpy(pro[4],"HISTORY");
	strcpy(pro[5],"PASSWORD");
	strcpy(pro[6],"BACK");
	strcpy(pro[7],"EXIT");
   }
	void front();
};

struct username
{
   char name[100];
   char pass[100];
}login;


class pro_cesfunction : public pro_cess
{
 protected:
   void fhelp();
   void fsearch();
   void fedit();
   void fabout();
   void fhistory();
   void fpassword();
   void newmember();
   void search_engine(char[]);
   void subtopic();

 public:
   void log_in();
    void back_exit(int,char[],char[]);
   void process();

}access;

struct user_details
{
 char pass[50],color[10],book[10],nick[10];
}er;

char his_details[100];


 #define y "yes"
 #define n  "no"

 void load();

 char member[100];

 char pro[100] ,b[100] ,l[100] ,gett ,x[5], ch[20];

 int  stop=1, top=0,guest=0, corect=1,ax=1,by=1,count=1,pas_check,flag=0;
 static int his;

 void arrow(int,int);
 void relation(char[]);
 void display();
