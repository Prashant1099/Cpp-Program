/* A program which takes any number as i/p and prints table of that number
   with while condition */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int n,i;
	clrscr();

	cout<<"\n Enter any Number = ";
	cin>>n;

	i=1;
	while(i<=10)
	{
		cout<<"\n "<<n<<" x "<<i<<" = "<<n*i<<"";
		cout<<"\n------------------";
		i++;
	}
	getch();
}