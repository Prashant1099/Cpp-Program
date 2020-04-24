/* A program which takes any radius as i/p and prints area of that circle
   using Constructor without argument */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class area
{
	float r,pi,ar;

	public:
	void input();
	void process();
	void display();
	area();
};
void main()
{
	clrscr();

	area obj;
	obj.input();
	obj.process();
	obj.display();

	getch();
}
void area::input()
{
	cout<<"\n Enter Radius = ";
	cin>>r;
}
void area::process()
{
	ar=pi*r*r;
}
void area::display()
{
	cout<<"\n Area of Circle with Radius "<<r<<" = "<<ar;
}
area::area()
{
	pi=3.14;
}

