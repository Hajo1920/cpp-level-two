#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int twoDarray[3][4] = {{1,2,3,4},
                   {5,6,7,8},
                   {9, 10, 11,12}};

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            if(twoDarray[row][col] < 10) cout << setw(3);
            cout << twoDarray[row][col] << setw(3);
        }
        cout << endl;
    }

    return 0;
}