/* A Program which takes any number as i/p and prints either the number is Even or Odd*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int n;

	clrscr();

	cout<<"\n Enter any Number = ";
	cin>>n;

	if(n%2==0)
	cout<<"\n "<<n<<" is Even Number";
	else
	cout<<"\n "<<n<<" is Odd Number";

	getch();
}
