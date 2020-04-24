#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	clrscr();

	int u,n,t,h,th,sum=0;

	cout<<"\n Enter a 4 Digit Number : ";
	cin>>n;

	u=n%10;
	n=n/10;
	t=n%10;
	n=n/10;
	h=n%10;
	n=n/10;
	th=n%10;

	sum=u+t+h+th;

	cout<<"\n Reverse of "<<th<<h<<t<<u<<" = "<<u<<t<<h<<th;
	cout<<"\n Sum of "<<th<<h<<t<<u<<"     = "<<sum;

	getch();
}