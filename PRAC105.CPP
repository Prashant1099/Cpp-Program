/* A program which takes any number as i/p and prints factorial of that number
   using Recurrsion */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
int fact(int);
void main()
{
	int n,ans;
	clrscr();

	cout<<"\n Enter any Number = ";
	cin>>n;

	ans=fact(n);

	cout<<"\n Factorial of "<<n<<"   = "<<ans;

	getch();
}
int fact(int x)
{
	if(x==1)
	return x;
	else
	return x*fact(x-1);
}
