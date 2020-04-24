/* A program which takes any number as i/p and checks the i/p number is prime
    number or not with exit(0) method*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<process.h>
void main()
{
	int n,i;

	clrscr();

	cout<<"\n Enter any number = ";
	cin>>n;

	for(i=2;i<=n-1;i++)
	if(n%i==0)
	{
		cout<<"\n "<<n<<" is not a Prime Number";
		getch();
		exit(0);
	}
	cout<<"\n "<<n<<" is a Prime Number";

	getch();
}