#include<iostream.h>
#include<conio.h>
class Test
{ public:
  Test()
  { cout<<"\nThis is class Test";
  }
  ~Test()
  {cout<<"\ndistructor executes";
  }
};
void main()
{clrscr();
 Test obj;
 cout<<"\nthis is main";
 getch();
}









