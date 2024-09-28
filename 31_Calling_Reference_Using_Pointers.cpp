#include<iostream>
#include<cmath>
using namespace std;

int Num1 = 1000, Num2 = 3000;

void Swap(int *Num1, int *Num2){
// pointers will give as flexiblity when we want to point to another variable at run time.
  int Temporary = *Num1;
  *Num1 = *Num2;
  *Num2 = Temporary;
  cout << "Even globaly After Swapping: " << *Num1 << " and " << *Num2 << endl;

}

int main(){
  int Num1, Num2;
  cout << "Enter Num1: ";
  cin >> Num1;
  cout << "Enter Num2: ";
  cin >> Num2;
  cout << "Before Swapping: " << Num1 << " and " << Num2 << endl;
  Swap(&Num1, &Num2); // sending reference to pointers
  cout << "After Swapping: " << Num1 << " and " << Num2 << endl;


  return 0;

}