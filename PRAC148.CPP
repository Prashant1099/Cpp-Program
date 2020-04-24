/* Friend Class */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class boy
{
	private:
	int a,b,c;

	public:
	friend class girl;	//Girl class can access data of class boy
};
class girl
{
	public:
	boy obj;
	void input()
	{
		cout<<"\n Enter A = ";
		cin>>obj.a;
		cout<<"\n Enter B = ";
		cin>>obj.b;
	}

	void process()
	{
		obj.c=obj.a+obj.b;
	}

	void display()
	{
		cout<<"\n---------------------";
		cout<<"\n Total   = "<<obj.c;
	}
};

void main()
{
	clrscr();

	girl obj;
	obj.input();
	obj.process();
	obj.display();

	getch();
}
