/* A program which takes any number as i/p and prints Largest number among
   them using class */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class greater
{
	int a,b,c;

	public:
	void input();
	void process();
};
void main()
{
	clrscr();
	greater obj;

	obj.input();
	obj.process();

	getch();
}
void greater::input()
{
	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;
	cout<<"\n Enter C = ";
	cin>>c;
}
void greater::process()
{
	if(a==b&&a==c)
	cout<<"\n All numbers are equal";
	else
	if(a>b&&a>c)
	cout<<"\n "<<a<<" is Greater than "<<b<<" and "<<c<<"";
	else
	if(b>c)
	cout<<"\n "<<b<<" is Greater than "<<a<<" and "<<c<<"";
	else
	cout<<"\n "<<c<<" is Greater than "<<a<<" and "<<b<<"";
}




