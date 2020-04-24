/* A program which takes any String as i/p and prints either i/p String is
   Palindrom or not with exit(0) method */

#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<process.h>
void main()
{
	int len=0,i;
	char str[15];
	clrscr();

	cout<<"\n Enter any String = ";
	gets(str);

	while(str[len]!='\0')
	len++;

	for(i=0;i<len;i++)
	if(str[i]!=str[len-(i+1)])
	{
		cout<<"\n "<<str<<" is not a Palindrome String";
		getch();
		exit(0);
	}
	cout<<"\n "<<str<<" is a Palindrome String";

	getch();
}


