#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
	//map<key_data_type,value_data_type> var_name;
	//var_name[key1]=val1;
	//var_name[key1]=val1;
	map<string,string>phonebook;
	phonebook["Vihaan"]="9970746755";
	phonebook["Arohi"]="9766445594";
	
	string name;
	cout<<"Enter the name:";
	cin>>name;
	if(phonebook.find(name)!=phonebook.end())
     cout<<name<<":"<<phonebook[name];
	 else
	 cout<<name<<"not found";
	 return 0;
	 	
	
}
