#include <iostream>
using namespace std;
int main(){
    int a = 10;
    cout << "Value: " << a << endl;

    cout << "Address in memory: " << &a << endl;

    int * p = &a;

    cout << "Pointer of a adress: " << p << endl;
    return 0;
}