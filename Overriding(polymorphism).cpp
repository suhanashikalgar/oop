#include<iostream>
using namespace std;
class Parent{
	public:
		void f1()
		{
			cout<<"In Parent class";
		}
	};
	
class Child:public Parent
{
	public:
		void f1()
		{
			cout<<"\nIn Child class";
		}
};
int main()
{
	Parent p;
	p.f1();
	Child c;
	c.f1();
	return 0;
}
