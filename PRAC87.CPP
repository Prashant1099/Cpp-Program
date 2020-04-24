/* A program which prints i/p string in a Specific Pattern */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	char str[20];
	int len=0,row,col,sp;

	clrscr();

	cout<<"\n Enter String = ";
	gets(str);

	while(str[len]!='\0')
	len++;

	cout<<"\n String = "<<str;
	cout<<"\n Length = "<<len;

	cout<<"\n\n Pyramid of "<<str<<" : ";
	cout<<"\n------------------------"<<endl;
	for(row=0;row<len;row++)
	{
		for(sp=0;sp<=len-row+1;sp++)
		cout<<"  ";
		for(col=0;col<=row;col++)
		cout<<" "<<str[col];
		cout<<"\n";
	}

	getch();
}



