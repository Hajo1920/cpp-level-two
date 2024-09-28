#include <iostream>
using namespace std;
int main(){
    float flt = 100.5;
    int digit = 10;
    string name = "Ahmed";

    // to point a pointer from variable to another variable the variables type must be the same.
    // but when we want to use the pointer for different type of data types we use the void keyword.

    void *ptr;

    ptr = &flt;
    // to access the value of a variable using a pointer we must cast the type to the pointer
    cout << "Float: " << *(static_cast<float*>(ptr)) << endl;
    cout << "Float Address: " << ptr << endl;

    ptr = &digit;
    cout << "Integer: " << *(static_cast<int*>(ptr)) << endl;
    cout << "Integer Address: " << ptr << endl;

    ptr = &name;
    cout << "String: " << *(static_cast<string*>(ptr)) << endl;
    cout << "String Address: "<< ptr << endl;
  
    return 0;
}