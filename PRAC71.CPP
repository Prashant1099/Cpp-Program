/* A program which takes n numbers as i/p and prints maximum number among them */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int a[10],r,i,max;

	clrscr();

	cout<<"\n Enter Range = ";
	cin>>r;

	for(i=0;i<r;i++)
	{
		cout<<"\n Enter "<<i+1<<" Number = ";
		cin>>a[i];
	}

	max=a[0];
	for(i=0;i<r;i++)
	if(max<a[i])
	max=a[i];

	cout<<"\n--------------------------";
	cout<<"\n Maximum number = "<<max;

	getch();
}