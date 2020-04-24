/* A program for Multiplication of Matrix */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<iomanip.h>

void main()
{
	int a[3][3],b[3][3],c[3][3],row,col,k,sn=1;
	clrscr();

	cout<<"\n Enter 9 Element of Matrix A :";
	for(row=0;row<3;row++)
	for(col=0;col<3;col++)
	{
		cout<<"\n Enter "<<sn++<<" Element = ";
		cin>>a[row][col];
	}
	sn=1;
	cout<<"\n Enter 9 Element of Matrix B :";
	for(row=0;row<3;row++)
	for(col=0;col<3;col++)
	{
		cout<<"\n Enter "<<sn++<<" Element = ";
		cin>>b[row][col];
	}

	clrscr();

	cout<<"\n Matrix A is : "<<endl;
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		cout<<" "<<a[row][col];
		cout<<"\n";
	}

	cout<<"\n Matrix B is : "<<endl;
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		cout<<" "<<b[row][col];
		cout<<"\n";
	}


	cout<<"\n Multiplication of Matrix A and B : "<<endl;
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=0;
			for(k=0;k<3;k++)
			c[row][col]=c[row][col]+a[row][k]*b[k][col];
			cout<<setw(4)<<c[row][col];
		}
		cout<<"\n";
	}
	getch();
}
