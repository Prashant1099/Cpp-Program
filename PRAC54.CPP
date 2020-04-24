#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int row,col,r;
	clrscr();

	cout<<"\n Enter Range = ";
	cin>>r;

	for(row=1;row<=r;row++)
	{
		for(col=1;col<=r;col++)
		if(row==1||row==r||col==1||col==r)
		cout<<" *";
		else
		cout<<"  ";
		cout<<"\n";
	}
	getch();
}