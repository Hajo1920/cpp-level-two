#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void PrintFileContent(string file){
    fstream myFile;
    myFile.open(file, ios::in); // readmood

    if(myFile.is_open()){
        string content;

        while(getline(myFile, content)){
            cout << content << endl;
        }
    }
}

int main(){
    PrintFileContent("myText.txt");
    return 0;
}