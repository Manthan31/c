#include<iostream.h>
#include<conio.h>
class A
{
  public:
  void aa()
  {cout<<"\nthis is class A";
  }
};
class B
{
 public:
 void bb()
 {
 cout<<"\nthis is class B";
 }
} ;
class C:public A,public B
{
  public:
  void cc()
  {
   cout<<"\nthis is class C";
  }
};
class D:public C
{ public:
  void dd()
  {
   cout<<"\nthis is function D";
  }
};
void main()
{
  clrscr();
  D D1;
  C C1;
  D1.cc();
  D1.bb();
  D1.aa();
  C1.aa();
  C1.bb();
  getch();
}




