#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int * p;
    p = &a;

    cout << "value of the pointer: " << p << endl;
    cout << "value of the variable a by dereferencing its pointer: " << *p << endl; // this is dereferencing

    *p = 20;  // assigning new value to variable a using pointer p;
    cout << "New value:" << a << endl;
    cout << "Derefrencing new value: " << *p << endl;

    a = 30;

    cout << "New value:" << a << endl;
    cout << "Derefrencing new value: " << *p << endl;

    return 0;
}