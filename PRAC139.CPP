// File 2 (TEXT FILE)
// READ FROM FILE

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	clrscr();
	char fname[20];

	cout<<"\n Enter File Name = ";
	gets(fname);

	ifstream a(fname);
	char row[80],ch;
	int i;

	for(i=0;i<=10;i++) //no of lines
	{
		a.get(row,50); // no of chars in a line
		a.get(ch);
		cout<<"\n "<<row;
	}
	a.close();

	getch();
}
