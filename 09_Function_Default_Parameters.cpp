#include <iostream>

using namespace std;

int add(int a, int b, int c = 0, int d = 0){

    return (a + b + c + d);
}

int main(){
    cout << add(100,200) << endl; // 300 c and d are optional arguments now
    cout << add(100, 200, 300) << endl; // 600 c will override the default value with new argument
    cout << add(100,200,300,400) << endl; // 1000 all default values are now overrided
    return 0;
}