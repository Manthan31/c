#include<iostream.h>
#include<conio.h>
class Test
{
  public:
  int x,y;
  Test()
  {
    x=10;
    y=20;
  }
  Test(int a,int b)
  {  x=a;
     y=b;
  }
  Test(Test &z)
  {
    x=z.x;
    y=z.y;
  }
  void show()
  {
    cout<<"\nvalue of x:"<<x
	<<"\nvalue of y:"<<y;
  }
};
void main()
{clrscr();
 Test ob1,ob2(30,40),ob3(ob2);
 ob1.show();
 ob2.show();
 ob3.show();
 getch();
}


