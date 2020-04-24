/* A Menu Driven Calculator which takes two Numbers as i/p and further do
   Addition,Subtraction,Multiplication,Division and Percentage*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	float a,b,c;
	int ch;

	clrscr();

	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;

	cout<<"\n 1. Addition";
	cout<<"\n 2. Subtraction";
	cout<<"\n 3. Multiplication";
	cout<<"\n 4. Division";
	cout<<"\n 5. Percentage";

	cout<<"\n\n Enter Your Choice between 1 to 5 = ";
	cin>>ch;

	clrscr();

	switch(ch)
	{
		case 1 :
		c=a+b;
		cout<<"\n Addition of a and b ("<<a<<" + "<<b<<") = "<<c;
		break;

		case 2 :
		c=a-b;
		cout<<"\n Subtraction of a and b ("<<a<<" - "<<b<<") = "<<c;
		break;

		case 3 :
		c=a*b;
		cout<<"\n Multiplication of a and b ("<<a<<" * "<<b<<") = "<<c;
		break;

		case 4 :
		c=a/b;
		cout<<"\n Division of a and b ("<<a<<"/"<<b<<") = "<<c;
		break;

		case 5 :
		c=(a*100)/b;
		cout<<"\n Percentage of a and b  =  "<<c;
		break;

		default:
		cout<<"\n You Entered wrong choice";
	}
	getch();
}


