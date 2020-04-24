/* A program which takes any number as i/p and check whether i/p number is a
   Perfect number or not*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int n,i,sum=0;

	clrscr();

	cout<<"\n Enter any Number = ";
	cin>>n;

	for(i=1;i<n;i++)
	if(n%i==0)
	sum=sum+i;

	if(sum==n)
	cout<<"\n "<<n<<" is a Perfect Number";
	else
	cout<<"\n "<<n<<" is not a Perfect Number";

	getch();
}
