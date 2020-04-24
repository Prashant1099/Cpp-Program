/* A Program which takes three number as i/p and prints Greatest number among
  them with function of without argument and without return type */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void g3();
void main()
{
	clrscr();
	g3();
	getch();
}
void g3()
{
	int a,b,c;

	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;
	cout<<"\n Enter C = ";
	cin>>c;

	if(a==b && a==c)
	cout<<"\n All Numbers are equal ";
	else
	if(a>b && a>c)
	cout<<"\n "<<a<<" is greater than "<<b<<" and "<<c<<"";
	else
	if(b>c)
	cout<<"\n "<<b<<" is greater than "<<a<<" and "<<c<<"";
	else
	cout<<"\n "<<c<<" is greater than "<<a<<" and "<<b<<"";
}


