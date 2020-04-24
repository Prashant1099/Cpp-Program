/* Greatest number b/w 2 Numbers*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int a,b;

	clrscr();

	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;

	if(a==b)
	cout<<"\n All Numbers are Equal";
	else
	if(a>b)
	cout<<"\n A is Greater than B i.e. "<<a<<" is Greater than "<<b<<"";
	else
	cout<<"\n B is Greater than A i.e. "<<b<<" is Greater than "<<a<<"";

	getch();
}