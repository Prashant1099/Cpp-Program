/* A program which takes any number as i/p and prints total and average using
   pointer with class  */
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class total
{
	int a,b,c;
	float tot,avg;

	public:
	void input();
	void process();
	void display();
};
void main()
{
	clrscr();
	total obj,*p;

	p=&obj;

	p->input();
	p->process();
	p->display();

	getch();
}
void total::input()
{
	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;
	cout<<"\n Enter C = ";
	cin>>c;
}
void total::process()
{
	tot=a+b+c;
	avg=tot/3;
}
void total::display()
{
	cout<<"\n---------------------";
	cout<<"\n Total   = "<<tot;
	cout<<"\n Average = "<<avg;
}
