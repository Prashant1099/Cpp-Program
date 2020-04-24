#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int r,row,col,sp;

	clrscr();

	cout<<"\n Enter Range = ";
	cin>>r;

	for(row=1;row<=r;row++)
	{

		for(sp=1;sp<=r-row+1;sp++)
		cout<<"  ";
		for(col=1;col<=row;col++)
		cout<<"   "<<col;
		cout<<"\n";
	}
	getch();
}