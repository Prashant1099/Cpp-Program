/* A program which takes any number as i/p and check either that number is
   present or not */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int a[10],i,r,s,po=0;

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
		po=i+1;
		break;
	}


	if(po==0)
	cout<<"\n "<<s<<" not found ";
	if(po==1)
	cout<<"\n "<<s<<" found in "<<po<<"st position";
	if(po==2)
	cout<<"\n "<<s<<" found in "<<po<<"nd position";
	else
	cout<<"\n "<<s<<" found in "<<po<<"th position";

	/* if(po==0)
	cout<<"\n "<<s<<" not found";
	else
	cout<<"\n "<<s<<" found in "<<po<<" position"; */

	getch();
}
