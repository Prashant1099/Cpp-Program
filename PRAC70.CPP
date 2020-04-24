/* A program which takes any number as i/p and prints occurance of that number */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int a[10],i,r,s,count=0;

	clrscr();

	cout<<"\n Enter Range = ";
	cin>>r;

	for(i=0;i<r;i++)
	{
		cout<<"\n Enter "<<i+1<<" Number = ";
		cin>>a[i];
	}

	cout<<"\n Enter number to search = ";
	cin>>s;

	for(i=0;i<r;i++)
	if(s==a[i])
	{
		count++;
	}

	if(count==0)
	cout<<"\n "<<s<<" not found";
	else
	cout<<"\n "<<s<<" found  "<<count<<" times";

	getch();
}
