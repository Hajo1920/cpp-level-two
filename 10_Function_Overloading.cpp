#include <algorithm>
#include <iostream>
using namespace std;
// function overloading means giving many defined functions the same name.
//(NB. but either the amount of parameter or type of parameters must be different).

void mySum(int a, int b){
    cout << a+b << endl;
}

void mySum(double a, double b){
    cout << a+b << endl;
}

void mySum(int a, int b , int c){
    cout << a+b+c << endl;
}

int main(){
    mySum(100, 200);
    mySum(100.50, 100.50);
    mySum(100, 200, 300);

    return 0;
}