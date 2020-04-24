/* A program which takes any number as i/p and prints REVERSE of that number
   and also prints SUM of that number with do..While condition*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int  n,n1,mod,rev=0,sum=0,i;
	clrscr();

	cout<<"\n Enter any Number = ";
	cin>>n;

	n1=n;
	i=1;
	do
	{
		mod=n%10;
		rev=rev*10+mod;
		sum=sum+mod;
		n=n/10;
	}while(i<=n);

	cout<<"\n Reverse of "<<n1<<" = "<<rev;
	cout<<"\n Sum of "<<n1<<"     = "<<sum;

	getch();
}
