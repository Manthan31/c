#include<iostream.h>
#include<conio.h>
class s
{
  public:
  int a,b;
  void setvalue()
  {
     a=10;
     b=20;
  }
  void setvalue(int x,int y)

  {
     a=x;

     b=y;
  }
  void setvalue(s z)
  {
    a=z.a;
    b=z.b;
  }
  void show()
  { cout<<"\nvalue of a:"<<a<<"\n"
	 << "\nvalue of b:"<<b;
  }
};
  void main()
  { clrscr();
    s obj1,obj2,obj3;
    obj1.setvalue();
    obj1.show();
    obj2.setvalue(8,9);
    obj2.show();
    obj3.setvalue(obj1);
    obj3.show();
    getch();
}
