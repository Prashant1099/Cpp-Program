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
}obj;

void main()
{
clrscr();
//mark obj;
cout<<"\n Enter Name : ";
flushall();
gets(obj.name);
cout<<"\n Enter Age : ";
cin>>obj.age;
cout<<"\n Enter Roll No. : ";
cin>>obj.roll;
cout<<"\n Enter marks of 1st Subject : ";
cin>>obj.m1;
cout<<"\n Enter marks of 2nd Subject : ";
cin>>obj.m2;
cout<<"\n Enter marks of 3rd Subject : ";
cin>>obj.m3;
cout<<"\n Enter marks of 4th Subject : ";
cin>>obj.m4;
cout<<"\n Enter marks of 5th Subject : ";
cin>>obj.m5;

obj.tot=obj.m1+obj.m2+obj.m3+obj.m4+obj.m5;
obj.per=(obj.tot*100)/500;

if(obj.per<=40)
obj.grade = 'E';
else
if(obj.per<=50)
obj.grade = 'D';
else
if(obj.per<=60)
obj.grade = 'C';
else
if(obj.per<=80)
obj.grade = 'B';
else
obj.grade = 'A';

clrscr();
cout<<"\n -----------------------------------------------";
cout<<"\n                  MARK SHEET";
cout<<"\n -----------------------------------------------";

cout<<"\n -----------------------------------------------";
cout<<"\n Name       = "<<obj.name;
cout<<"\n Age        = "<<obj.age;
cout<<"\n Roll No.   = "<<obj.roll;
cout<<"\n -----------------------------------------------";
cout<<"\n Marks of 1st Subject = "<<obj.m1;
cout<<"\n Marks of 2nd Subject = "<<obj.m2;
cout<<"\n Marks of 3rd Subject = "<<obj.m3;
cout<<"\n Marks of 4th Subject = "<<obj.m4;
cout<<"\n Marks of 5th Subject = "<<obj.m5;
cout<<"\n -----------------------------------------------";
cout<<"\n Total      = "<<obj.tot;
cout<<"\n Percentage = "<<obj.per;
cout<<"\n Grade      = "<<obj.grade;
cout<<"\n -----------------------------------------------";


getch();
}