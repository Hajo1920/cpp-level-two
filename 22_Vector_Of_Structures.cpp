#include <iostream>
#include <vector>

using namespace std;
struct stEmployeeInfo {
    string name;
    string job;
    int salary;
};

int main(){
    vector <stEmployeeInfo> vEmployeeInfo;
    stEmployeeInfo EmployeeInfo;

    EmployeeInfo.name = "Ahmed Osman";
    EmployeeInfo.job = "Software Enginner";
    EmployeeInfo.salary = 12000;
    vEmployeeInfo.push_back(EmployeeInfo);

    EmployeeInfo.name = "Moammed Karim";
    EmployeeInfo.job = "Product Enginner";
    EmployeeInfo.salary = 10000;
    vEmployeeInfo.push_back(EmployeeInfo);

    EmployeeInfo.name = "Muna Semir";
    EmployeeInfo.job = "Graphic Designer";
    EmployeeInfo.salary = 5000;
    vEmployeeInfo.push_back(EmployeeInfo);

    for(stEmployeeInfo &Employee: vEmployeeInfo){
        cout << Employee.name << endl;
        cout << Employee.job << endl;
        cout << Employee.salary << endl;
    }
    return 0;
}