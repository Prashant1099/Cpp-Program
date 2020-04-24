/* A program which takes any number as i/p and prints The day which comes on
   that number, similarly takes any number as i/p and prints The month comes
   on that number*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int day,month;

	clrscr();

	cout<<"\n Enter Day between 1 to 7    = ";
	cin>>day;
	cout<<"\n Enter Month between 1 to 12 = ";
	cin>>month;

	switch(day)
	{
		case 1:
		cout<<"\n "<<day<<"st day is Monday";
		break;

		case 2:
		cout<<"\n "<<day<<"nd day is Tuesday";
		break;

		case 3:
		cout<<"\n "<<day<<"rd day is Wednesday";
		break;

		case 4:
		cout<<"\n "<<day<<"th day is Thrusday";
		break;

		case 5:
		cout<<"\n "<<day<<"th day is Friday";
		break;

		case 6:
		cout<<"\n "<<day<<"th day is Saturday";
		break;

		case 7:
		cout<<"\n "<<day<<"th day is Sunday";
		break;

		default:
		cout<<"\n You Entered wrong day";
	}

	switch(month)
	{
		case 1:
		cout<<"\n "<<month<<"st month is January";
		break;

		case 2:
		cout<<"\n "<<month<<"nd month is Febuary";
		break;

		case 3:
		cout<<"\n "<<month<<"rd month is March";
		break;

		case 4:
		cout<<"\n "<<month<<"th month is April";
		break;

		case 5:
		cout<<"\n "<<month<<"th month is May";
		break;

		case 6:
		cout<<"\n "<<month<<"th month is June";
		break;

		case 7:
		cout<<"\n "<<month<<"th month is July";
		break;

		case 8:
		cout<<"\n "<<month<<"th month is August";
		break;

		case 9:
		cout<<"\n "<<month<<"th month is September";
		break;

		case 10:
		cout<<"\n "<<month<<"th month is October";
		break;

		case 11:
		cout<<"\n "<<month<<"th month is November";
		break;

		case 12:
		cout<<"\n "<<month<<"th month is December";
		break;

		default:
		cout<<"\n You entered wrong month";
	}

	getch();
}


