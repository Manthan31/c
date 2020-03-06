#include<iostream.h>
#include<conio.h>
class base
{
    public:
    void show()
    {
      cout<<"\nvirtual function";

    }
    virtual void fun() = 0;


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
	base *b;
	clrscr();
	derived1 d1;
	derived2 d2;
	b=&d1;
	b->fun();
	b=&d2;
	b->fun();
       //	b->show();
       getch();

   getch();
}
