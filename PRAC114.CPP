/* A program which takes any number as i/p and prints total and average of array
   using class */
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class total
{
	int a[10],i,r,sn;
	float sum,avg;

	public:
	void input();
	void process();
	void display();
	total();
};
total::total()
{
	sum=0;
	avg=0;
	sn=1;
}
void main()
{
	clrscr();

	total obj;
	obj.input();
	obj.process();
	obj.display();

	getch();
}
void total::input()
{
	cout<<"\n Enter Range = ";
	cin>>r;

	for(i=0;i<r;i++)
	{
		cout<<"\n Enter "<<sn++<<" Number = ";
		cin>>a[i];
	}
}
void total::process()
{
	for(i=0;i<r;i++)
	sum=sum+a[i];

	avg=sum/r;
}
void total::display()
{
	cout<<"\n----------------------------";
	cout<<"\n Summation = "<<sum;
	cout<<"\n Average   = "<<avg;
}





