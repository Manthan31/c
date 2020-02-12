#include<iostream.h>
#include<conio.h>
class s
{
 private:
 char name[20];
 char clas[15];
 int rollno;
 public:
 void input()
 {
    cout<<"\nenter name:";
    cin>>name;
    cout<<"\nenter clas:";
    cin>>clas;
    cout<<"\nenter rollno:";
    cin>>rollno;

 }
 void show()
 {
   cout<<"\nname:"<<name;
   cout<<"\nclass:"<<clas;
   cout<<"\nrollno:"<<rollno;
 }
};
void main()
{
 clrscr();
 s s1[4];
 int i;
 for(i=0;i<4;i++)
 {

   s1[i].input();

 }
 for(i=0;i<4;i++)
 {

   s1[i].show();
   cout<<"\n";
 }
 getch();
}


