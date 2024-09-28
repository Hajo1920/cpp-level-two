#include <iostream>
#include <iterator>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int *pArr = arr; // now the x will point to the first element of the array.

  

    // to point the pointer to every element of the array we must add + 1 to the second element
    // add + 2 the third element and soon...

    cout << "All Adresses are:" << endl;
    for(int x = 0; x<= size(arr); x++){
      if(x == 0){

        cout << "Element["<< x <<"]: "<< pArr << endl;
        continue;
      }
      cout << "Element["<< x <<"]: "<< pArr + x << endl;
    }


    return 0;
}