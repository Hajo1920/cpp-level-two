#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {1, 2, 3, 4, 5};

    cout << "\nInitial/Readonly vector:" << endl;
    for(const int num: nums){
        cout << num << " ";
    }

    cout << "\nUpdateable vector: " << endl;
    for(int num: nums){
        num = 100;
        cout << num << " ";
    }

    cout << "\nBefore readonly activation vector update: " << endl;
    nums.at(0) = 10;
    nums[4] = 50;
    for(const int num: nums){
        cout << num << " ";
    }


    return 0;
}