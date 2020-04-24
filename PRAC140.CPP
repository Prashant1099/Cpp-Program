// File 3
// BINARY FILE WRITE

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
struct mark
{
	char name[15];
	int age,roll,m1,m2;
	float tot,per;
};

void main()
{
	clrscr();
	char fname[20];
	int size;
	mark a;

	//INPUT
	cout<<"\n Enter File Name to write data = ";
	gets(fname);

	cout<<"\n Enter Name              = ";
	gets(a.name);
	cout<<"\n Enter Age               = ";
	cin>>a.age;
	cout<<"\n Enter Roll Number       = ";
	cin>>a.roll;
	cout<<"\n Enter Marks of 1st Sub. = ";
	cin>>a.m1;
	cout<<"\n Enter Marks of 2nd Sub. = ";
	cin>>a.m2;

	//PROCESS
	a.tot=a.m1+a.m2;
	a.per=(a.tot*100)/200;

	//TRANSFER TO THE FILE
	ofstream w;
	w.open(fname);
	size=sizeof(mark);
	w.write((char *)&a,size);
	w.close();

	cout<<"\n Data Transfer to the "<<fname<<" File.......";

	getch();
}