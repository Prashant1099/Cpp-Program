/* A program which takes any number as i/p and check whether the i/p number is
   a prime number or not*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int n,i,count=0;

	clrscr();

	cout<<"\n Enter any number = ";
	cin>>n;

	for(i=1;i<=n;i++)
	if(n%i==0)
	count++;

	if(count==2)
	cout<<"\n "<<n<<" is a Prime Number";
	else
	cout<<"\n "<<n<<" is not a Prime Number";

	getch();
}