/* A program which prints number of blank space,vowels,number,upper character,
   lower character etc.. present in i/p string */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int len=0,b=0,v=0,dig=0,up=0,low=0,i;
	char str[100];
	clrscr();

	cout<<"\n Enter any String = ";
	gets(str);
	while(str[len]!='\0')
	len++;

	for(i=0;i<len;i++)
	{
		if(str[i]==' ')
		b++;
		else
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
		str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		v++;
		else
		if(str[i]>='0' && str[i]<='9')
		dig++;


		if(str[i]>='a'&& str[i]<='z')
		low++;
		if(str[i]>='A'&& str[i]<='Z')
		up++;

	}

	cout<<"\n-------------------------------------------";
	cout<<"\n The Input String   = "<<str;
	cout<<"\n The length of Input string         = "<<len;
	cout<<"\n Number of Words present            = "<<b+1;
	cout<<"\n Number of Characters present       = "<<len-b;
	cout<<"\n Number of Blank space present      = "<<b;
	cout<<"\n Number of Vowels present           = "<<v;
	cout<<"\n Number of Consonents present       = "<<len-(b+v+dig);
	cout<<"\n Number of Lower character present  = "<<low;
	cout<<"\n Number of Upper character present  = "<<up;
	cout<<"\n Number of Digits present           = "<<dig;

	getch();
}




