/* A Program of total and average with function of with argument and return
   type */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
float total(int,int,int);
void main()
{
	clrscr();

	int a,b,c;
	float ans,avg;

	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;
	cout<<"\n Enter C = ";
	cin>>c;

	ans=total(a,b,c);

	avg=ans/3;

	cout<<"\n-----------------";
	cout<<"\n Total   = "<<ans;
	cout<<"\n Average = "<<ans/3;
	getch();
}
float total(int x,int y,int z)
{
	float tot;

	tot=x+y+z;

	return tot;
}
