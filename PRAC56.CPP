/* A program which takes any number as i/p and prints factorial of that number
   with while condition*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int n,f=1,i;
	clrscr();

	cout<<"\n Enter any Number = ";
	cin>>n;

	i=1;
	while(i<=n)
	{
		f=f*i;
		i++;
	}

	cout<<"\n Factorial of "<<n<<" = "<<f;
	getch();
}