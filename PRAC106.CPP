/* A program which takes any two number as Base and Exponent and prints Power
   accordingly using Recurrsion */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
int power(int,int);
void main()
{
	int b,e,ans;
	clrscr();

	cout<<"\n Enter Base = ";
	cin>>b;
	cout<<"\n Enter Expo = ";
	cin>>e;

	ans=power(b,e);

	cout<<"\n "<<b<<" to the Power "<<e<<" = "<<ans;

	getch();
}
int power(int x,int y)
{
	if(y==1)
	return x;
	else
	return x*power(x,y-1);
}

