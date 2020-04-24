/* FRIEND FUNCTION */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class two;       	// Advanced Declaration like Function
class one
{
	int a;

	public:
	void input1()
	{
		cout<<"\n Enter A  = ";
		cin>>a;
	}
	friend void add(one,two);	//Friend Function
};

class two
{
	int b;

	public:
	void input2()
	{
		cout<<"\n Enter B  = ";
		cin>>b;
	}
	friend void add(one,two);	//Friend Function
};

void add(one obj1,two obj2)
{
	int c;
	c=obj1.a+obj2.b;

	cout<<"\n-------------------";
	cout<<"\n Addition = "<<c;
}

void main()
{
	clrscr();
	one obj1;
	two obj2;
	obj1.input1();
	obj2.input2();
	add(obj1,obj2);

	getch();
}
