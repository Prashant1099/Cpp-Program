#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int r,row,col;
	clrscr();

	cout<<"\n Enter Range = ";
	cin>>r;

	for(row=1;row<=r;row++)
	{
		for(col=1;col<=row;col++)
		cout<<" "<<row*col;
		cout<<"\n";
	}
	getch();
}