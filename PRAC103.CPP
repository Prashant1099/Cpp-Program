/* A Program which takes three number as i/p and prints Greatest number among
  them with function of with argument and with return type */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
int g3(int,int,int);
void main()
{
	clrscr();

	int a,b,c;
	float ans;

	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;
	cout<<"\n Enter C = ";
	cin>>c;

	if(a==b && a==c)
	cout<<"\n All Numbers are equal ";
	else
	{
	ans=g3(a,b,c);
	cout<<"\n "<<ans<<" is Greater";
	}
	getch();
}
int g3(int x,int y,int z)
{
	if(x>y && x>z)
	return x;
	else
	if(y>z)
	return y;
	else
	return z;
}


