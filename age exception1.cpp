#include<iostream>
using namespace std;
int main()
{
   int age;
    cout<<"enter age:";
    cin >> age;

    try {
        if (age<0 ) 
            throw "negative age!";
        
        else if(age==0)
        throw "zero age";
		
        else    
         cout<<age<<" is valid age";
        }
    catch(const char *str) {
        cout << "Exception: " << str;
    }


    return 0;
}
