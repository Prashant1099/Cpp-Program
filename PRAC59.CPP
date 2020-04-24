/* A program which takes any number as i/p and prints whether i/p number is
   PALINDROME NUMBER or not with while condition*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int n,n1,r,i,rev=0,mod;
	clrscr();

	cout<<"\n Enter any Number = ";
	cin>>n;

	n1=n;

	i=1;
	while(i<=n)
	{
		mod=n%10;
		rev=rev*10+mod;
		n=n/10;
	}

	if(n1==rev)
	cout<<"\n "<<n1<<" is a Palindrome Number ";
	else
	cout<<"\n "<<n1<<" is not a Palindrome Number ";

	getch();
}
