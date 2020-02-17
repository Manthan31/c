#include<iostream.h>
#include<conio.h>
class student
{
   public:
   char name[20];
   char clas[15];
   int rollno;
   void input()
   {
      cout<<"\nenter a name:";
      cin>>name;
      cout<<"\nenter a clas:";
      cin>>clas;
      cout<<"\nenter a rollno:";
      cin>>rollno;
   }
   void print()
   {
       cout<<"\nname:"<<name;
       cout<<"\nclass:"<<clas;
       cout<<"\nrollno:"<<rollno;
   }

};
 void main()
 {  student s[3];
    clrscr();
    int i;
    for(i=0;i<2;i++)
    {

      s[i].input();


    }
    for(i=0;i<2;i++)
    {
      s[i].print();
      cout<<"\n";

    }
    getch();
 }