#include<iostream.h>
#include<conio.h>
class student
{
   public:
   void add()
   { int x,y;
      cout<<"enter two numbers for addition:";
      cin>>x>>y;
      cout<<"addition is:"<<(x+y);
   }
};
   class a:student
   {  public:
      void aa()
      {
	 add();
      }
   };
   void main()
   {
      clrscr();
      a a11;
      a11.aa();
      getch();
   }







