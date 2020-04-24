// File 4
// BINARY READ FILE

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

	//INPUT  FILE NAME
	cout<<"\n Enter File Name = ";
	gets(fname);

	//READ FROM FILE
	ifstream read;
	read.open(fname);
	size=sizeof(mark);
	read.read((char *)&a,size);

	clrscr();
	cout<<"\n------------------------------------------";
	cout<<"\n            MARKSHEET ";
	cout<<"\n------------------------------------------";
	cout<<"\n Name              = "<<a.name;
	cout<<"\n Age               = "<<a.age;
	cout<<"\n Roll Number       = "<<a.roll;
	cout<<"\n Marks of 1st Sub. = "<<a.m1;
	cout<<"\n Marks of 2nd Sub. = "<<a.m2;
	cout<<"\n------------------------------------------";
	cout<<"\n Total             = "<<a.tot;
	cout<<"\n Percentage        = "<<a.per;
	cout<<"\n------------------------------------------";

	read.close();

	getch();
}