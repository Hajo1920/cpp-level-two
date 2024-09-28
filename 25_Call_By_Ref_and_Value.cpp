#include <iostream>

using namespace std;

void ByValFunc(int x){
    x++;
}

void  ByRefFunc(int &x){
     x++;
}

int main(){
    int a = 10;
    int b = 10;
    ByValFunc(a);
    ByRefFunc(b);

    // called by value will not change any value out of the scope
    cout << "value of a: " << a << endl; // 10

    // called by refernence will be changed from any place in the program
    cout << "value of b: " << b << endl; // 11

    return 0;
}