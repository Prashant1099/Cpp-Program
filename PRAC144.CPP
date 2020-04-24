/* A program for static variable */
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class item
{
	static int count;
	//int count;
	char name[20];
	int roll,age;

	public:
	void input();
	void display();
	void cdisplay();
};
int item::count;
//Definition of Static data members
//Must in case of static data type

void main()
{
	clrscr();
	item a,b,c;

	a.cdisplay();
	b.cdisplay();
	c.cdisplay();

	a.input();
	a.cdisplay();

	b.input();
	a.cdisplay();

	c.input();
	a.cdisplay();

	clrscr();
	a.display();
	b.display();
	c.display();

	getch();
}
void item::input()
{
	cout<<"\n\n Enter Name        = ";
	gets(name);
	cout<<"\n Enter Age         = ";
	cin>>age;
	cout<<"\n Enter Roll Number = ";
	cin>>roll;
	count++;
}
void item::display()
{
	cout<<"\n--------------------------------";
	cout<<"\n Name        = "<<name;
	cout<<"\n Age         = "<<age;
	cout<<"\n Roll Number = "<<roll;
	cout<<"\n--------------------------------";
}
void item::cdisplay()
{
	cout<<"\n "<<count<<"Record Entered";
}


