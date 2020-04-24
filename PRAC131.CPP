/* A program which takes Base and Exponent as i/p and prints power of that number
   with Call by value return address using Pointer */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
int * power(int ,int);
void main()
{
	int b,e,*p,*q,*ans;

	clrscr();

	cout<<"\n Enter Base = ";
	cin>>b;
	cout<<"\n Enter Expo = ";
	cin>>e;

	p=&b;
	q=&e;

	*ans=*power(*p,*q);
	cout<<"\n---------------------------------";
	cout<<"\n "<<*p<<" to the power "<<*q<<" = "<<*ans;

	getch();
}
int *power(int x,int y)
{
	int i,po=1;

	for(i=1;i<=y;i++)
	po=po*x;

	return &po;
}




