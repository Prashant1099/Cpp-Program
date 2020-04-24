/* A program which takes any String as i/p and prints Reverse of that String */

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

	cout<<"\n Reverse of "<<str<<" = ";
	for(i=len-1;i>=0;i--)
	cout<<str[i];

	getch();
}
