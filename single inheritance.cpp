#include<iostream>
using namespace std;
class A
{
	public:
	int a,b;
	void get()
	{
		cout<<"\nEnter two number";
		cin>>a>>b;
	}
	
};
class B:public A
{
		public:
	void sum()
	{
		cout<<"\nAddition :"<<a+b;
	}
};
int main()
{
	B obj;
	obj.get();
	obj.sum();
	return 0;
}
