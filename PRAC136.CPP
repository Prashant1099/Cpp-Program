/* A program which prints Marksheet with array according to the given i/p
   using pointer with Class */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class mark
{
	int age,roll,m1,m2,m3,m4,m5;
	float tot,per;
	char grade;
	char name[20];

	public:
	void input();
	void process();
	void display();

}obj[10];

void main()
{
	clrscr();

 //	mark obj[20];
	mark *p;
	int r,i;

	p=obj;

	cout<<"\n Enter Range = ";
	cin>>r;

	for(i=0;i<r;i++)
	{
		p->input();
		p->process();
		p++;
	}

	p=obj;
	for(i=0;i<r;i++)
	{
		clrscr();
		p->display();
		cout<<"\n Press any key for next record....";
		p++;
		getch();
	}

}

void mark::input()
{
	cout<<"\n Enter Name : ";
	flushall();
	gets(name);
	cout<<"\n Enter Age : ";
	cin>>age;
	cout<<"\n Enter Roll No. : ";
	cin>>roll;
	cout<<"\n Enter marks of 1st Subject : ";
	cin>>m1;
	cout<<"\n Enter marks of 2nd Subject : ";
	cin>>m2;
	cout<<"\n Enter marks of 3rd Subject : ";
	cin>>m3;
	cout<<"\n Enter marks of 4th Subject : ";
	cin>>m4;
	cout<<"\n Enter marks of 5th Subject : ";
	cin>>m5;

}

void mark::process()
{
	tot=m1+m2+m3+m4+m5;
	per=(tot*100)/500;

	if(per<=40)
	grade = 'E';
	else
	if(per<=50)
	grade = 'D';
	else
	if(per<=60)
	grade = 'C';
	else
	if(per<=80)
	grade = 'B';
	else
	grade = 'A';
}


void mark::display()
{
	clrscr();
	cout<<"\n -----------------------------------------------";
	cout<<"\n                  MARK SHEET";
	cout<<"\n -----------------------------------------------";
	cout<<"\n -----------------------------------------------";
	cout<<"\n Name       = "<<name;
	cout<<"\n Age        = "<<age;
	cout<<"\n Roll No.   = "<<roll;
	cout<<"\n -----------------------------------------------";
	cout<<"\n Marks of 1st Subject = "<<m1;
	cout<<"\n Marks of 2nd Subject = "<<m2;
	cout<<"\n Marks of 3rd Subject = "<<m3;
	cout<<"\n Marks of 4th Subject = "<<m4;
	cout<<"\n Marks of 5th Subject = "<<m5;
	cout<<"\n -----------------------------------------------";
	cout<<"\n Total      = "<<tot;
	cout<<"\n Percentage = "<<per;
	cout<<"\n Grade      = "<<grade;
	cout<<"\n -----------------------------------------------";
}