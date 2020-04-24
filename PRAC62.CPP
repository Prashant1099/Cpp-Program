/* A program which takes any number as i/p and prints factorial of that number
   with do..while condition*/

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
	do
	{
		f=f*i;
		i++;
	}while(i<=n);

	cout<<"\n Factorial of "<<n<<" = "<<f;
	getch();
}