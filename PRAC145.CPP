/* UNARY OPERATOR OVERLOADING */
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class abc
{
	int x,y,z;

	public:
	void input(int a,int b,int c);
	void display();
	void operator-();      //Operator Unary minus
};
void abc::input(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}
void abc::display(void)
{
	cout<<"\n A = "<<x;
	cout<<"\n B = "<<y;
	cout<<"\n C = "<<z;
}
void abc::operator-()
{
	x=-x;
	y=-y;
	z=-z;
}
void main()
{
	clrscr();
	int a,b,c;
	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;
	cout<<"\n Enter C = ";
	cin>>c;

	abc obj;
	obj.input(a,b,c);
	cout<<"\n-------------------";
	cout<<"\n First Output  : ";
	obj.display();
	obj.operator-();
	cout<<"\n-------------------";
	cout<<"\n second Output : ";
	obj.display();
	cout<<"\n-------------------";

	getch();
}


