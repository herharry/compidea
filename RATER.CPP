#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include"smile.cpp"
char src[100];

class rating
{
public: char name[20];
 float rate;
 int users;
 void disp()
 {
 clrscr();
 cout<<"\ntopic:" <<name;
 cout<<"\nratings:"<<rate;
 cout<<"\ntotal no. of users:"<< users;}
}S;

void rate()
{ clrscr();

int cl=0;
 char search[20];
strcpy(search,src);
int rates;
clrscr();
fstream f1("rates",ios::in|ios::out|ios::binary);
while(f1.read((char*)&S,sizeof(S)))
{
 cl++;
 if(strcmpi(S.name,search)==0)
 {
  int smile(int);
  rates=smile(int(S.rate));
  S.disp();
  S.users++;
  S.rate=(S.rate*(S.users-1)+rates)/S.users;
  f1.seekg((cl-1)*sizeof(S),ios::beg);
  f1.write((char*)&S,sizeof(S));
  cout<<"\nthankyou for your rating";
 }
 }
 getch();
 }


