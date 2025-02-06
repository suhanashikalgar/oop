#include<iostream>
using namespace std;
class Football
{
	public:
		int r;
		float area,circumference;
		
	Football() //default constructor
	{
		cout<<"*default constructor*\n";
		
		cout<<"Enter Radius of Football:";
		cin>>r;
		area=3.142*r*r;
		
		circumference=2*3.142*r;
	
	}	
	Football(int r1) //parameterized constructor
	{  
		cout<<"\n\n*parameterized constructor*";
		
	
	    this->r=r1;
		
		area=3.142*r*r;
	
		circumference=2*3.142*r;
		
	}
	Football(Football& obj) // shallow copy constructor
	{
		cout<<"\n\n*Shallow copy constructor*";
			
		r=obj.r;
		area=3.142*r*r;
	 circumference=2*3.142*r;
	
	}		
	~Football()
	{
		cout<<"\n\nDestructor run";
		}	
};
int main()
{
	Football f1;
	cout<<"\nRadius1:"<<f1.r;
	cout<<"\nArea1:"<<f1.area;
	cout<<"\nCicumference1:"<<f1.circumference;
	
	Football f2(10);
	cout<<"\nRadius2:"<<f2.r;
	cout<<"\nArea2:"<<f2.area;
	cout<<"\nCicumference2:"<<f2.circumference;
	
	Football f3(f2);
	cout<<"\nRadius3 :"<<f3.r;
	cout<<"\nArea3:"<<f3.area;
	cout<<"\nCicumference3:"<<f3.circumference;
}
