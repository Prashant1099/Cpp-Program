/* A program for Bubble sorting */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int a[10],r,i,j,temp;

	clrscr();

	cout<<"\n Enter Range  = ";
	cin>>r;
	for(i=0;i<r;i++)
	{
		cout<<"\n Enter "<<i+1<<" Number = ";
		cin>>a[i];
	}

	for(i=0;i<r;i++)
	for(j=0;j<r-1;j++)
	if(a[j]>a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}

	cout<<"\n After Sorting";
	for(i=0;i<r;i++)
	cout<<"\n "<<a[i];

	getch();
}
