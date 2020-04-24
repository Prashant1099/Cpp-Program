/* A Program which takes three number as i/p and prints Greatest number among
  them with function of with argument and without return type */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void g3(int,int,int);
void main()
{
	clrscr();

	int a,b,c;
	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;
	cout<<"\n Enter C = ";
	cin>>c;

	g3(a,b,c);
	getch();
}
void g3(int x,int y,int z)
{
	if(x==y && x==z)
	cout<<"\n All Numbers are equal ";
	else
	if(x>y && x>z)
	cout<<"\n "<<x<<" is greater than "<<y<<" and "<<z<<"";
	else
	if(y>z)
	cout<<"\n "<<y<<" is greater than "<<x<<" and "<<z<<"";
	else
	cout<<"\n "<<z<<" is greater than "<<x<<" and "<<y<<"";
}


