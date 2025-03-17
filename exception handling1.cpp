#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Enter the 2 no. for division";
    cin>>b>>c;
    try
    {
    	if(c==0) throw"Divide by zero error";
    	a=b/c;
    	cout<<"answer:"<<a;
	}
	catch(const char* str)
	{
		cout<<"expection:"<<str;
	}
	return 0;
}
