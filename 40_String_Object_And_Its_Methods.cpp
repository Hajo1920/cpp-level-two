#include <iostream>
#include <string>
#include <variant>
using namespace std;

int main(){
    string str = "Hello, My name is Ahmed Osman. I love Programming.";
    // total index length of the string object;
    cout << str.length() << endl;

    //adds any character after the end of the string object
    str.append(" @ProgrammingAdives. \n");
    cout << str << endl;

    // returns any part of the string characters based on the given positions.
    cout << str.substr(18, 11) << endl; // Ahmed Osman

    // inserts any characters(word) at a given position of the string
    str.insert(5, " Friends");
    cout << str << endl;

    // adds any character at the end of the string
    str.push_back('A');
    cout << str << endl;

    // removes any character from the end of the string
    str.pop_back();
    cout << str << endl;

    // finds and returns position of a specific character or word in the string
    cout << str.find("Ahmed") << endl;

    //if any provided word or character not found it will return wierd numbers
    cout << str.find("Fredi") << endl;

    //we can use validation to handle the not found by comparing it with npos propery
    if(str.find("Fredi") == str.npos){
        cout << "This word not found in the string" << endl;
    }

    str.clear(); // clears all characters from the string.


    return 0;
}