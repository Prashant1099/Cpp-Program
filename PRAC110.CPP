/* A program which takes any number as i/p and prints total and average using
   class */
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
	void g3();
	void g2();
};
void main()
{
	clrscr();
	total obj;

	cout<<"\n 1 total & avg ";
	cout<<"\n 2 g3 ";
	cout<<"\n 2 g2 ";
	int ch;
	cout<<"\n\n\n Enter  your choice : ";
	cin>>ch;

	switch(ch)
	{
	case 1:
	obj.input();
	obj.process();
	obj.display();
	break;

	case 2:
	obj.input();
	obj.g3();
	break;


	case 3:
	obj.g2();
	break;


	}












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
void total::g3()
{
if(a==b &&a==c)
cout<<"\n All are equals ";
else
if(a>b && a>c)
cout<<"\n A is gretest ";
else
if(b>c)
cout<<"\n B is gretest ";
else
cout<<"\n C is gretest ";

}




void total::g2()
{
	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;


	if(a==b )
	cout<<"\n Both are equals ";
	else
	if(a>b )
	cout<<"\n A is gretest ";
	else
	cout<<"\n B is gretest ";
}

