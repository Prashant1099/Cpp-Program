/* An Example of Hybrid Enharitance */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class student
{
	public:
	char name[20];
	int roll,age;
	void sinput();
	void sdisplay();
};
void student::sinput()
{
	cout<<"\n Enter Name     = ";
	cin>>name;
	cout<<"\n Enter Age      = ";
	cin>>age;
	cout<<"\n Enter Roll No. = ";
	cin>>roll;
}
void student::sdisplay()
{
	clrscr();
	cout<<"\n--------------------------";
	cout<<"\n Student Class ";
	cout<<"\n--------------------------";
	cout<<"\n Name     = "<<name;
	cout<<"\n Age      = "<<age;
	cout<<"\n Roll No. = "<<roll;
	cout<<"\n--------------------------";
	cout<<"\n Press any key for MARK Class......";
	getch();
}
class mark:public student
{
	int m1,m2,m3;
	float tot,per;

	public:
	void minput();
	void mprocess();
	void mdisplay();
};
void mark::minput()
{
	student::sinput();
	cout<<"\n Enter Marks 1 = ";
	cin>>m1;
	cout<<"\n Enter Marks 2 = ";
	cin>>m2;
	cout<<"\n Enter Marks 3 = ";
	cin>>m3;
}
void mark::mprocess()
{
	tot=m1+m2+m3;
	per=(tot*100)/300;
}
void mark::mdisplay()
{
	student::sdisplay();
	clrscr();
	cout<<"\n---------------------------";
	cout<<"\n MARK Class ";
	cout<<"\n---------------------------";
	cout<<"\n Maths      = "<<m1;
	cout<<"\n English    = "<<m2;
	cout<<"\n Computer   = "<<m3;
	cout<<"\n---------------------------";
	cout<<"\n Total      = "<<tot;
	cout<<"\n Percentage = "<<per;
	cout<<"\n---------------------------";
	cout<<"\n Press any key for GAME Class......";
	getch();
}
class game
{
	char gname[20];

	public:
	void ginput();
	void gdisplay();
};
void game::ginput()
{
	cout<<"\n Enter the name of the game he likes = ";
	cin>>gname;
}
void game::gdisplay()
{
	clrscr();
	cout<<"\n-----------------------------";
	cout<<"\n GAME Class ";
	cout<<"\n-----------------------------";
	cout<<"\n Enter the name of the game he likes = "<<gname;
	cout<<"\n\n Press any key for FEES Class......";
	getch();
}
class fees:public mark,public game
{
	int ftot,fpaid,fbal;

	public:
	void finput();
	void fprocess();
	void fdisplay();
};
void fees::finput()
{
	mark::minput();
	game::ginput();

	cout<<"\n Enter Total fees = ";
	cin>>ftot;
	cout<<"\n Enter Paid fees  = ";
	cin>>fpaid;
}
void fees::fprocess()
{
	mark::mprocess();
	fbal=ftot-fpaid;
}
void fees::fdisplay()
{
	mark::mdisplay();
	game::gdisplay();

	clrscr();
	cout<<"\n----------------------------";
	cout<<"\n FEES Class ";
	cout<<"\n----------------------------";
	cout<<"\n Total Fees   = "<<ftot;
	cout<<"\n Fees Paid    = "<<fpaid;
	cout<<"\n----------------------------";
	cout<<"\n Balance Fees = "<<fbal;
	cout<<"\n----------------------------";
}
void main()
{
	clrscr();
	fees obj;
	obj.finput();
	obj.fprocess();
	obj.fdisplay();

	getch();
}







