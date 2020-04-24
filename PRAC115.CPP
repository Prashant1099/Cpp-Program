/* A program which takes any String as i/p and prints reverse of that string
   using class */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class reverse
{
	int len,i;
	char str[10];

	public:
	void input();
	void process();
	reverse();
};
reverse::reverse()
{
	len=0;
}
void main()
{
	clrscr();

	reverse obj;
	obj.input();
	obj.process();

	getch();
}
void reverse::input()
{
	cout<<"\n Enter any String = ";
	gets(str);
}
void reverse::process()
{
	while(str[len]!=0)
	len++;

	cout<<"\n-----------------------------------";
	cout<<"\n Reverse of "<<str<<" = ";
	for(i=len-1;i>=0;i--)
	cout<<""<<str[i];
}






