/* Greatest number b/w 3 Numbers*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int a,b,c;

	clrscr();

	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;
	cout<<"\n Enter C = ";
	cin>>c;

	if(a==b && a==c)
	cout<<"\n All numbers are Equal ";
	else
	if(a>b && a>c)
	cout<<"\n A is Greater than B and C i.e. "<<a<<" is Greater than "<<b<<" and "<<c<<"";
	else
	if(b>c)
	cout<<"\n B is Greater than A and C i.e. "<<b<<" is Greater than "<<a<<" and "<<c<<"";
	else
	cout<<"\n C is Greater than A and B i.e. "<<c<<" is Greater than "<<a<<" and "<<b<<"";

	getch();
}

