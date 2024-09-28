#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4, 5};

    vector<int>::iterator itr;

    for(itr = nums.begin(); itr != nums.end(); itr++){
        
        cout << *itr << endl;
    }
    return 0;
}