#include <iostream>
using namespace std;

// Base class A
class A {
public:
    int a, b;
    void get() {
        cout << "\nEnter two numbers: ";
        cin >> a >> b;
    }
};

// Derived class B from A
class B :virtual public A {
public:
    void sum() {
        cout << "\nAddition: " << a + b;
    }
};

// Derived class C from A
class C :virtual public A {
public:
    void sub() {
        cout << "\nSubtraction: " << a - b;
    }
};

// Derived class D from both B and C
class D : public B, public C {
public:
    void displayResults() {
        // Display results from B and C
        cout << "\nResults from class B and C:";
        cout << "\nAddition: " << B::a + B::b; // Accessing a and b from B
        cout << "\nSubtraction: " << C::a - C::b; // Accessing a and b from C
    }
};

int main() {
    D obj;
    obj.get(); 
    
    // Call methods from B and C
    obj.B::sum();
    obj.C::sub(); 
    
    // Display results from both B and C
    obj.displayResults();
    
    return 0;
}
