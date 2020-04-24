/* A program for this Pointer */

#include<stdio.h>
#include<conio.h>
#include<iostream.h>

//program for this pointer
class test
{
	int a;

	public:
	void input(int x)
	{
		this->a=x;
	}

	void display()
	{
		cout<<"\n A = "<<a;
		cout<<"\n\n Address of A  = "<<this;
		cout<<"\n Value through = "<<this->a;
	}
};

void main()
{
	clrscr();
	test obj;
	obj.input(10);
	obj.display();

	getch();
}

