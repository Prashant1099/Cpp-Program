// File 1
//WRITE TO THE TEXT FILE

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

	ofstream a(fname);
	a<<"\n----------------------";
	a<<"\n Name    - Prashant Patel ";
	a<<"\n Address - Kota";
	a<<"\n City    - Raipur";
	a<<"\n----------------------";
	a.close();

	cout<<"\n Data transfer press any key....";

	getch();
}
