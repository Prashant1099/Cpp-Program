/* A program which takes "n" numbers as i/p and prints SUM and AVERAGE of
   that numbers using array */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int a[20],r,i;
	float tot=0,avg;
	clrscr();

	cout<<"\n Enter Range = ";
	cin>>r;

	for(i=0;i<r;i++)
	{
		cout<<"\n Enter "<<i+1<<" Number = ";
		cin>>a[i];
	}

	//new

	for(i=0;i<r;i++)
	tot=tot+a[i];
	avg=tot/r;

	cout<<"\n-------------------";
	cout<<"\n Total   = "<<tot;
	cout<<"\n Average = "<<avg;
	cout<<"\n-------------------";
	getch();
}