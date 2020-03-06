#include<iostream.h>
#include<conio.h>
class base
{
    public:
    void show()
    {
      cout<<"\nvirtual function";

    }
    virtual void fun()
    {
      cout<<"\nthis is base";

    }

};
class derived1:public base
{  public:
   void fun()
   {
     cout<<"\nthis is derived 1";


   }

};
class derived2:public base
{ public:
  void fun()
  {
    cout<<"\nthis is derived 2";
  }
};
void main()
{
   base b,*p;
   derived1 d1;
   derived2 d2;
   clrscr();
   p=&b;
   p->fun();
   p=&d1;
   p->fun();
   p=&d2;
   p->fun();
   p->show();
   getch();
}





