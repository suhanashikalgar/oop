#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={1,1,1,2,2,3,3,2,2,4,4,4,4,4,5,5,6};
	vetor<int> v(arr, arr+sizeof(arr)/sizeof(int));
	int target,c;
	cout<<"Enter the no.:";
	cin>>target;
	c=count(v.begin(),v.end(),target);
	cout<< "count :"<<c;
	return 0;
	
}
