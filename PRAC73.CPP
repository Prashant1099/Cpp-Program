/* A program which merges two array */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int a[10],b[10],c[20],r1,r2,i;

	clrscr();

	cout<<"\n Enter First Range  = ";
	cin>>r1;
	for(i=0;i<r1;i++)
	{
		cout<<"\n Enter "<<i+1<<" Number = ";
		cin>>a[i];
	}

	cout<<"\n Enter Second Range = ";
	cin>>r2;
	for(i=0;i<r2;i++)
	{
		cout<<"\n Enter "<<i+1<<" Number = ";
		cin>>b[i];
	}

	for(i=0;i<r1;i++)
	c[i]=a[i];
	for(i=0;i<r2;i++)
	c[r1+i]=b[i];

	cout<<"\n-------------------------";
	cout<<"\n After merging";

	for(i=0;i<r1+r2;i++)
	cout<<"\n "<<c[i];

	getch();
}

