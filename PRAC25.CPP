/* A program which prints Perfect Number in a Given range*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int n,r,i,j,sum=0;

	clrscr();

	cout<<"\n Enter Range = ";
	cin>>r;

	for(j=1;j<=r;j++)
	{
		sum=0;
		n=j;

		for(i=1;i<n;i++)
		if(n%i==0)
		sum=sum+i;

		if(sum==n)
		cout<<"\n "<<n<<" Perfect Number";
	}
	getch();
}