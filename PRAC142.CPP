/* VOID POINTER */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>

//void pointer
int main()
{
	clrscr();
	int a;
	void *p;

	cout<<"\n Enter A = ";
	cin>>a;

	p=&a;

	cout<<"\n Address = "<<p;
	//cout<<"\n Value = "<<*p;  ( this is wrong )
	cout<<"\n Value   = "<<*(int *)p;

	getch();
}