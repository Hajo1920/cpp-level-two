#include <cstdlib>
#include <ios>
#include <iostream>
#include <limits>
using namespace std;
int ReadInput(){
     int number;

    cout << "Enter Number of students you want to register: ";
   
    cin >> number;
   
    while(cin.fail() || number <= 0){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter Integer greater than zero only !" << endl;
        cout << "Enter Number of students you want to register: ";
        cin >> number;
    }
    return number;
    }

    void CreateArrayOfStudents(int result){
        float *ptrFloat;
        ptrFloat = new float[result];

        for(int x = 0; x< result; x++){
            cout << "Student [" <<x+1 <<"]: ";
            cin >> *(ptrFloat + x);
            }

        cout << "Desplaying Student Result:- " << endl;
        for(int x = 0; x < result; x++){
            cout << "Student[" << x+1 <<"]: " << *(ptrFloat+x) << endl;
        }

        delete[] ptrFloat; // clearing array from memory
    }


int main(){
    CreateArrayOfStudents(ReadInput());  
    return 0;
}