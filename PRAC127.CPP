/* A program which prints sum and average of array using Pointer */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	clrscr();
	int a[10],r,*p,*ra,i;
	float sum=0,avg;

	cout<<"\n Enter Range = ";
	cin>>r;

	ra=&r;

	for(i=0;i<*ra;i++)
	{
		cout<<"\n Enter "<<i+1<<" Element = ";
		cin>>a[i];
	}
	p=a;
	for(i=0;i<*ra;i++)
	sum=sum+*p++;
	avg=sum/(*ra);


	cout<<"\n---------------------";
	cout<<"\n Summation = "<<sum;
	cout<<"\n Average   = "<<avg;

	getch();
}


