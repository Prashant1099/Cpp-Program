/* A program for Selection sorting */

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

	for(i=0;i<r-1;i++) 
	for(j=i+1;j<r;j++)
	if(a[i]>a[j])
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}

	cout<<"\n After Sorting";
	for(i=0;i<r;i++)
	cout<<"\n "<<a[i];

	getch();
}
