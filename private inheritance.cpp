#include<iostream>
using namespace std;

class Base
{
    protected:
        int var;
        
        // Constructor
        Base()
        {
            var =1;
        }

        void show()
        {
            cout << "Base Method" << endl;
        }
};

class Derived : private Base  // Protected inheritance
{
  public:
  	
    void showderived()
    {   show();
        cout << "Derived class" << endl;
        cout << var << endl;  
    }
};

int main()
{	

    Derived d;          
    d.showderived();   
   
    return 0;
}
