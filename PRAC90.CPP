/* A program which takes any String as i/p and further takes any character
   and search either that character is present in that string or not */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int len=0,po=0,i;
	char str[10],s;
	clrscr();

	cout<<"\n Enter String = ";
	gets(str);

	while(str[len]!='\0')
	len++;

	cout<<"\n Enter character to search = ";
	cin>>s;


	for(i=0;i<len;i++)
	if(s==str[i])
	{
		po=i+1;
		break;
	}

	if(po==0)
	cout<<"\n "<<s<<" is not Present ";
	else
	cout<<"\n "<<s<<" is Present at "<<po<<" Position ";

	getch();
}

