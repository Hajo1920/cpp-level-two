#pragma once
#include <iostream>

using namespace std;
namespace InputReader {
   inline string StringReader(string message){
        string input = "";
        cout << message << " ";
        cin >> input;

        return input;
    }

   inline int IntegerReader(string message){
        int input = 0;
        cout << message << " ";
        cin >> input;

        return input;
    }
}