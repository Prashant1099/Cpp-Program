/* A base program for String */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	char str[20];
	int len=0,i;

	clrscr();

	cout<<"\n Enter String = ";
	gets(str);

	while(str[len]!='\0')
	len++;

	cout<<"\n String = "<<str;
	cout<<"\n Length = "<<len;

	//new
	getch();
}