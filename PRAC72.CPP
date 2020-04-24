/* A program which takes n numbers as i/p and prints minimum number among them */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int a[10],r,i,min;

	clrscr();

	cout<<"\n Enter Range = ";
	cin>>r;

	for(i=0;i<r;i++)
	{
		cout<<"\n Enter "<<i+1<<" Number = ";
		cin>>a[i];
	}

	min=a[0];
	for(i=0;i<r;i++)
	if(min>a[i])
	min=a[i];

	cout<<"\n--------------------------";
	cout<<"\n Minimum number = "<<min;

	getch();
}