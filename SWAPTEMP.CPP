#include<iostream.h>
#include<conio.h>
template<class x>
void swapargs(x &a,x &b)
{
 x temp;

 temp=a;
 a=b;
 b=temp;
}
void main()
{
int i=10,j=20;
double x=10.1,y=23.3;
char a='x',b='z';
clrscr();
cout<<"original i,j:"<<i<<","<<j<<"\n";
cout<<"original x,y:"<<x<<","<<y<<"\n";
cout<<"original a,b:"<<a<<","<<b<<"\n";
swapargs(i,j);
swapargs(x,y);
swapargs(a,b);
cout<<"swapped i,j:"<<i<<","<<j<<"\n";
cout<<"swapped x,y:"<<x<<","<<y<<"\n";
cout<<"swapped a,b:"<<a<<","<<b<<"\n";
getch();
}