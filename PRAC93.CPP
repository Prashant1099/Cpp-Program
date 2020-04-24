/* A program which takes any two String as i/p and merge them to another string */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int len1=0,len2=0,len3=0,i;
	char str1[15],str2[15],str3[30];
	clrscr();

	cout<<"\n Enter First String = ";
	gets(str1);
	while(str1[len1]!='\0')
	len1++;

	cout<<"\n Enter Second String = ";
	gets(str2);
	while(str2[len2]!='\0')
	len2++;

	 for(i=0;i<len1;i++)
	 str3[i]=str1[i];

	 str3[i]=' ';


	 for(i=0;i<len2;i++)
	 str3[len1+i+1]=str2[i];

	 str3[len1+i+1]='\0';
	 cout<<"\n\n After merging "<<str1<<" & "<<str2<<" : ";
	 cout<<"\n------------------------------------";
	 cout<<"\n "<<str3;

	 getch();
}

