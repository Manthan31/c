#include<iostream.h>
#include<conio.h>
class A
{
  public:
  void aa()
  {
    cout<<"\nThis is class A";
  }
};
class B
{
   public:
   void bb()
   { cout<<"\nthis is class B";
   }
};
class C:public A,public B
{
  public:
  void cc()
  { cout<<"this is class C";
  }
};
void main()
{
   clrscr();
   C z;
   z.bb();
   z.aa();
   getch();
}



