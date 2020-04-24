/* A program which takes any amount as i/p and prints the TAX and Net Amount*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	float amt,tax,net;

	clrscr();

	cout<<"\n Enter any Amount = ";
	cin>>amt;

	if(amt<=1000)
	tax=0;
	else
	if(amt<=2000)
	tax=(amt*10)/100;
	else
	if(amt<=3000)
	tax=(amt*20)/100;
	else
	tax=(amt*30)/100;

	net=amt+tax;

	cout<<"\n --------------------------";
	cout<<"\n Amount     = "<<amt;
	cout<<"\n Tax        = "<<tax;
	cout<<"\n Net Amount = "<<net;
	cout<<"\n --------------------------";

	getch();
}
