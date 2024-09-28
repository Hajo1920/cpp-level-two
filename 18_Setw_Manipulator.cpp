#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    cout << "|----------------|----------------------------------------|----------------|" << endl;
    cout << "|      Code      |                  Name                  |      Mark      |" << endl;
    cout << "|----------------|----------------------------------------|----------------|" << endl;
    cout << "|"<< setw(16) << "C01" << "|" << setw(40) << "Introduction to Computer Sciense"<< "|" << setw(16)<< "99" << "|" << endl;
    cout << "|" << setw(16) << "C021" << "|" << setw(40) << "Cyber Security"<< "|" << setw(16)<<"98.5" << "|" << endl;
    cout << "|" << setw(16) << "C01101" << "|" << setw(40) << "Networking"<< "|" << setw(16)<<"97.8" << "|" << endl;

    cout << "|----------------|----------------------------------------|----------------|" << endl;
    return 0;
}