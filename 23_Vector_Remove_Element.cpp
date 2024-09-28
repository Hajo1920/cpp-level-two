#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    vNumbers.pop_back(); // removes the last entered which is 50;
    vNumbers.pop_back(); // then 40

    cout << "Vector size: " << vNumbers.size() << endl; // total size of items in the vector

    // vNumbers.clear() //clears the entiere vector

    for(int nums: vNumbers){
        cout << nums << endl;
    }


    return 0;
}