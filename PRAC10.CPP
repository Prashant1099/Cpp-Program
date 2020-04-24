/* A program which takes any number as i/p and prints either number is Positive or Negative*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int n;

	clrscr();

	cout<<"\n Enter any Number = ";
	cin>>n;

	if(n==0)
	cout<<"\n Entered number is zero ";
	else
	if(n>0)
	cout<<"\n "<<n<<" is Positive number";
	else
	cout<<"\n "<<n<<" is Negative number";

	getch();
}
