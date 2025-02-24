#include<iostream>
using namespace std;
class Date
{
	int date,month,year;
	public:
		Date():date(1),month(1),year(2001){}   //default constructor
		//	Date(int d,int m ,int y):date(d),month(m),year(y){}   //default constructor
		
		/*date()  //old default constructor
		{
		date=1;month=1;year=2001;
}*/
friend void operator>>(istream &in, Date &d);
friend void operator<<(ostream &out, Date &d);
};
void operator>>(istream &in, Date &d)
{
	cout<<"Enter the date:";
	in>>d.date;
	in>>d.month;
	in>>d.year;
}
void operator<<(ostream &out, Date &d)
{
	out<<"Entered date is:"<<d.date<<"/"<<d.month<<"/"<<d.year;
}
int main()
{
	Date d1;
	//cin>>d1;  new input value
	cout<<d1;
	return 0;
}
