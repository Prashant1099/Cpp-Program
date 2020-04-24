#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	 clrscr();

	 int a,b,c;

	 cout<<"\n Enter A : ";
	 cin>>a;
	 cout<<"\n Enter B : ";
	 cin>>b;

	 c=a;
	 a=b;
	 b=c;

	 cout<<"\n After Swapping : ";
	 cout<<"\n A = "<<a;
	 cout<<"\n B = "<<b;

	 getch();
}