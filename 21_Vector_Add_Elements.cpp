#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int>  vNumber;
    vNumber.push_back(100);
    vNumber.push_back(200);
    vNumber.push_back(300);
    vNumber.push_back(400);
    vNumber.push_back(500);
    for(int& Number: vNumber){
        cout << Number << " ";
    }


    return 0;
}