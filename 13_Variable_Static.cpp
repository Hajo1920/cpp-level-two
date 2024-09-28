#include <iostream>
using namespace std;

void Func(){
    static int number = 0;
    cout << "Number: " << number << endl;
    number++;
}

int main(){
    Func();
    Func();
    Func();
    return 0;
}