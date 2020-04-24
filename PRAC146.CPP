/* Inline Function */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
inline int Max(int x,int y)
{
	return(x>y)?x:y;
}
void main()
{
	clrscr();

	cout<<"\n Max(20,10)    = "<<Max(20,10);
	cout<<"\n Max(50,200)   = "<<Max(50,200);
	cout<<"\n Max(100,1010) = "<<Max(100,1010);

	getch();
}

