#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5};
    // cout << nums.at(5); this will throw an exception and crash the program
    // we can use try and catch to handle the exception 
    // while try and catch are useful but they can slow performance of the progam.
    // so we must use them at aproprate time. and use validations instade if possible.

    try {
    cout << nums.at(5);
    } catch (...) {
        cout << "out of bound! \n";
    }
    return 0;
}