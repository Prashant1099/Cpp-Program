/* A program which prints Marksheet according to the given i/p using Structure */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
struct mark
{
	int age,roll,m1,m2,m3,m4,m5;
	float tot,per;
	char grade;
	char name[20];
}obj[10];

void main()
{
	clrscr();
	//mark obj;

	int r,i;

	cout<<"\n Enter Range = ";
	cin>>r;

	for(i=0;i<r;i++)
	{
		cout<<"\n Enter Name : ";
		flushall();
		gets(obj[i].name);
		cout<<"\n Enter Age : ";
		cin>>obj[i].age;
		cout<<"\n Enter Roll No. : ";
		cin>>obj[i].roll;
		cout<<"\n Enter marks of 1st Subject : ";
		cin>>obj[i].m1;
		cout<<"\n Enter marks of 2nd Subject : ";
		cin>>obj[i].m2;
		cout<<"\n Enter marks of 3rd Subject : ";
		cin>>obj[i].m3;
		cout<<"\n Enter marks of 4th Subject : ";
		cin>>obj[i].m4;
		cout<<"\n Enter marks of 5th Subject : ";
		cin>>obj[i].m5;

		obj[i].tot= obj[i].m1+obj[i].m2+obj[i].m3+obj[i].m4+obj[i].m5;
		obj[i].per=(obj[i].tot*100)/500;

		if(obj[i].per<=40)
		obj[i].grade = 'E';
		else
		if(obj[i].per<=50)
		obj[i].grade = 'D';
		else
		if(obj[i].per<=60)
		obj[i].grade = 'C';
		else
		if(obj[i].per<=80)
		obj[i].grade = 'B';
		else
		obj[i].grade = 'A';
	}
	for(i=0;i<r;i++)
	{
		clrscr();
		cout<<"\n -----------------------------------------------";
		cout<<"\n                  MARK SHEET";
		cout<<"\n -----------------------------------------------";

		cout<<"\n -----------------------------------------------";
		cout<<"\n Name       = "<<obj[i].name;
		cout<<"\n Age        = "<<obj[i].age;
		cout<<"\n Roll No.   = "<<obj[i].roll;
		cout<<"\n -----------------------------------------------";
		cout<<"\n Marks of 1st Subject = "<<obj[i].m1;
		cout<<"\n Marks of 2nd Subject = "<<obj[i].m2;
		cout<<"\n Marks of 3rd Subject = "<<obj[i].m3;
		cout<<"\n Marks of 4th Subject = "<<obj[i].m4;
		cout<<"\n Marks of 5th Subject = "<<obj[i].m5;
		cout<<"\n -----------------------------------------------";
		cout<<"\n Total      = "<<obj[i].tot;
		cout<<"\n Percentage = "<<obj[i].per;
		cout<<"\n Grade      = "<<obj[i].grade;
		cout<<"\n -----------------------------------------------";
		cout<<"\n Press any key for next record....";
		getch();
	}

}