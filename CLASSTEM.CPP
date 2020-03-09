#include<iostream.h>
#include<conio.h>
template<class t>
class show
{
   t a,b;
   public:
   show(t p,t q)
   {
      a=p;
      b=q;
   }
   void show()
   {
      cout<<"a="<<a<<"\n"<<"b="<<b<<"\n";

   }
}
void main()
{
   show<int>ob1(10,20);
   show<float>ob2(10.2,20.5);
   show<char>ob3('a','b');
   clrscr();
   ob1.show();
   ob2.show();
   ob3.show();
   getch();

}



