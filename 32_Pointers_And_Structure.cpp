#include <iostream>
using namespace std;

struct stStudentInfo {
    string name;
    int age;
    string country;

};

int main(){
    stStudentInfo StudentInfo;

    StudentInfo.name = "Ahmed Osman";
    StudentInfo.country = "Eritrea";
    StudentInfo.age = 25;

    stStudentInfo *ptr = &StudentInfo;

    cout << "Structure pointer value: " << ptr << endl;

    // to access the structure values using the pointer
    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;
    cout << "Country: " << ptr->country << endl;
    return 0;
}