#include <iostream>

using namespace std;

int main(){
    int age = 20;
   string result = "";
    if(age <= 45){
        result = "Passed";
    }else{
        result =  "Failed";
    }

    cout << result << endl; //passed


    // using ternary

     result = (age <= 10) ?  "Passed" :  "Failed"; //failed
     cout << result << endl;


     // nested ternary operator
     age = 20;
     result = (age <= 19) ? "Passed" : ((age == 20) ? "Exact Age": "Failed"); // Exact Age
     cout << result << endl;
    return 0;
}