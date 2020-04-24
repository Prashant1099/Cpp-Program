/* A program which takes any number as i/p and prints whether i/p number is
   ARMSTRONG NUMBER or not with do..while condition*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
void main()
{
	int n,n1,dig=0,sum=0,mod;
	clrscr();

	cout<<"\n Enter any Number = ";
	cin>>n;

	n1=n;
	do
	{
		dig++;
		n=n/10;
	}while(n>0);

	n=n1;
	while(n>0)
	{
		mod=n%10;
		sum=sum+pow(mod,dig);
		n=n/10;
	}

	if(n1==sum)
	cout<<"\n "<<n1<<" is an Armstrong Number ";
	else
	cout<<"\n "<<n1<<" is not an Armstrong Number ";

	getch();
}
