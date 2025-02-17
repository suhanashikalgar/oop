#include<iostream>
using namespace std;
class Parent{
	public:
		virtual void f1()
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
Parent *p;
Child c;
p=&c;
p->f1();
return 0;	
}
