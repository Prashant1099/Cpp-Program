/* A program which prints Table of any i/p Number*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int n,i;

	clrscr();

	cout<<"\n Enter any Number = ";
	cin>>n;

	for(i=1;i<=10;i++)
	{
		cout<<"\n "<<n<<" x "<<i<<" = "<<n*i;
		cout<<"\n--------------------";
	}

	getch();
}