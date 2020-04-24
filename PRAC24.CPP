/* A program which takes any number as i/p and check whether the i/p number is
   a prime number or not*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int n,i,count=0,r,j;

	clrscr();

	cout<<"\n Enter range  ";
	cin>>r;


	for(j=1;j<=r;j++)
	{
		count=0;
		n=j;

		for(i=1;i<=n;i++)
		if(n%i==0)
		count++;

		if(count==2)
		cout<<"\n "<<n<<" is a Prime Number";
	}
	getch();
}