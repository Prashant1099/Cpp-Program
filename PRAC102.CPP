/* A Program which takes any number as Base and expo and prints Power
   accordingly number with function of with argument and with return type */

#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int power(int,int);
void main()
{
	clrscr();

	int b,e;
	float ans;

	cout<<"\n Enter Base = ";
	cin>>b;
	cout<<"\n Enter Expo = ";
	cin>>e;

	ans=power(b,e);

	cout<<"\n------------------------------";
	cout<<"\n "<<b<<" to the power "<<e<<" = "<<ans;
	getch();
}
int power(int x,int y)
{
	int i,po=1;
	for(i=1;i<=y;i++)
	po=po*x;

	return po;
}
