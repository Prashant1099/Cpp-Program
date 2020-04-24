/* Basic Program of array */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int a[20],r,i;

	clrscr();

	cout<<"\n Enter Range = ";
	cin>>r;

	for(i=0;i<r;i++)
	{
		cout<<"\n Enter "<<i+1<<" Number = ";
		cin>>a[i];
	}

	getch();
}