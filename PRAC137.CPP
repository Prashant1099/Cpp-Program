// MACRO

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#define max(a,b) cout<<"\n Maximum = "<<(a>b ? a:b);

void main()
{
	clrscr();
	int a,b;

	for(i=1;i<=4;i++)
	{
		cout<<"\n Enter A = ";
		cin>>a;
		cout<<"\n Enter B = ";
		cin>>b;

		max(a,b);
	}

	getch();
}
