#include<iostream.h>
#include<conio.h>
class A
{
  public:
  void abc()
  {  int x,y;
     cout<<"enter two numbers for addition";
     cin>>x>>y;
     cout<<"addition is:"<<(x+y);
  }
};
class B:public A
{  public:
   void mk()
   {
     abc();
   }
};
class C:public A
{ public:
  void ghi()
  {
    mk();
  }
};
void main()
{clrscr();
 C a1;
 a1.ghi();
 getch();
}


