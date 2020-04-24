/* A program for Lower Triangle Matrix */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int a[3][3],row,col,sn=1;
	clrscr();

	//Input of Matrix
	cout<<"\n Enter 9 Element of Matrix : ";
	for(row=0;row<3;row++)
	for(col=0;col<3;col++)
	{
		cout<<"\n Enter "<<sn++<<" Element = ";
		cin>>a[row][col];
	}

	clrscr();

	//Display of Matrix
	cout<<"\n Lower Triangle Matrix is : "<<endl;
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		if(row>=col)
		cout<<" "<<a[row][col];
		else
		cout<<"  ";
		cout<<"\n";
	}
	getch();
}
