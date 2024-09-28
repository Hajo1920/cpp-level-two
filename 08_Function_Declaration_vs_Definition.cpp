#include <iostream>

using namespace std;

// function declaration
int add(int, int);

int main(){
    cout << add(10,20);
    return 0;
}

// function definition
int add(int num1, int num2){
    return (num1 + num2);
}