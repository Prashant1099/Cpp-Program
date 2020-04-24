/* A program which takes any number as i/p and prints either number is Even
  or Odd with switch case*/


#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int n;

	clrscr();

	cout<<"\n Enter any Number = ";
	cin>>n;

	switch(n%2)
	{
		case 0:
		cout<<"\n "<<n<<" is Even Number";
		break;

		case 1:
		cout<<"\n "<<n<<" is Odd Number";
		break;
	}

	getch();
}



