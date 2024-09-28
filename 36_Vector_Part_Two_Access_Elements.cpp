#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {10, 20, 30, 40, 50};

    cout << "accessing element using .at() property" << endl;

    cout << "Element 1: " << nums.at(0) << endl;
    cout << "Element 2: " << nums.at(1) << endl;
    cout << "Element 3: " << nums.at(2) << endl;
    cout << "Element 4: " << nums.at(3) << endl;
    cout << "Element 5: " << nums.at(4) << endl;

    cout << "acces elemtns using index brackets [n]" << endl;

    cout << "Element 1: " << nums[0] << endl;
    cout << "Element 2: " << nums[1] << endl;
    cout << "Element 3: " << nums[2] << endl;
    cout << "Element 4: " << nums[3] << endl;
    cout << "Element 5: " << nums[4] << endl;
    return 0;
}