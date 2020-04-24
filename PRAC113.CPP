/* A program which takes any four digit number as i/p and prints reverse and
   sum of that number using class */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class reverse
{
	int n,u,t,h,th,sum,n1;

	public:
	void input();
	void process();
	void display();
	reverse();
};
reverse::reverse()
{
	sum=0;
}
void main()
{
	clrscr();

	reverse obj;
	obj.input();
	obj.process();
	obj.display();

	getch();
}
void reverse::input()
{
	cout<<"\n Enter any four digit number = ";
	cin>>n;
}
void reverse::process()
{
	n1=n;
	u=n%10;
	n=n/10;
	t=n%10;
	n=n/10;
	h=n%10;
	n=n/10;
	th=n%10;

	sum=u+t+h+th;
}
void reverse::display()
{
	cout<<"\n--------------------------";
	cout<<"\n Reverse of "<<n1<<" = "<<u<<t<<h<<th;
	cout<<"\n Sum of "<<n1<<"     = "<<sum;
}


