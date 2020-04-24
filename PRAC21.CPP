/* A program which prints Factorial of any given number */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int n,i,f=1;

	clrscr();

	cout<<"\n Enter any Number = ";
	cin>>n;

	for(i=1;i<=n;i++)
	f=f*i;

	cout<<"\n Factorial of "<<n<<" = "<<f;

	getch();
}