#include <iostream>
#include <string>

using namespace std;

int main(){
    int* ptrX;
    float* ptrF;
    int age;

    cout << "Enter your age: ";
    cin >> age;
    if(age >= 18){
        ptrX = new int;
        ptrF = new float;

        *ptrX = 20;
        *ptrF = 15.50f;

        cout << "Dynamic value of integer: " << *ptrX << endl;
        cout << "Dynamic value of Float: " << *ptrF << endl;

        delete ptrX;
        ptrX = nullptr;
        delete ptrF;
        ptrF = nullptr;

        if (ptrX != nullptr) {
            cout << "Dynamic value of integer: " << *ptrX << endl;
        }
        
    }else cout << "Your age is not eligble." << endl;



    return 0;
}