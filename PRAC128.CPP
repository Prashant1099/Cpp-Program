/* A program which takes any string as i/p and prints reverse of that string
  using Pointer */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	clrscr();
	int len=0,i;
	char str[20],*p;

	cout<<"\n Enter any String = ";
	gets(str);
	p=str;
	while(*p!='\0')
	{
		len++;
		p++;
	}

	p--;
	cout<<"\n Reverse of "<<str<<" = ";
	for(i=0;i<len;i++)
	cout<<*p--;


	getch();
}
