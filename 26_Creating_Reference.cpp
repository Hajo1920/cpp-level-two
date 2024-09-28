#include <iostream>

using namespace std;


int main(){
    int a = 10;
    int &b = a; // now a and b have the same place, vaule and adress in memory

    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    cout << "Adress of a in memory: " << &a << endl;
    cout << "Adress of b in memory: " << &b << endl;

    b = 20; // this will change the address and value in memory for its self and a

    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;




    return 0;

}