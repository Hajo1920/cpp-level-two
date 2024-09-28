#include <ios>
#include <iostream>
#include <limits>
using namespace std;

int ReadNumber(){
      int num = 0;
  cout << "Enter a number: ";
  cin >> num;

 while (cin.fail()){
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Invalid Number please enter a number: ";
    cin >> num;
 }
 return num;
}

int main(){
    cout << ReadNumber();

    return 0;
}