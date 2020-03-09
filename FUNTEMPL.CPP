#include<iostream.h>
#include<conio.h>
template<class t>
void show(t a,t b)
{

  cout<<"a="<<a<<"\n"<<"b="<<b<<"\n";

}
void main()
{
   int p=10,q=20;
   char m='a',n='b';
   float s=10.45,f=12.42;
   clrscr();
   show(p,q);
   show(m,n);
   show(s,f);
   getch();
}




