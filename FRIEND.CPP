#include<iostream.h>
#include<conio.h>

class s
{  int x,y;

      friend void main();

};
void main()
{s obj;
 clrscr();
 cout<<"enter two numbers for addition:";
 cin>>obj.x>>obj.y;
 cout<<"sum="<<obj.x+obj.y;
 getch();

}