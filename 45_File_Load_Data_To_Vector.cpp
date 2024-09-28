#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void PrintFileContent(string file, vector <string>& extractor){
    fstream myFile;
    myFile.open(file, ios::in); // readmood

    if(myFile.is_open()){
        string content;

        while(getline(myFile, content)){
            extractor.push_back(content);
        }
    }
}

int main(){
    vector <string> strVector;
    PrintFileContent("myText.txt", strVector);

    for(string &fileContent: strVector){
        cout << fileContent << endl;
    }
    return 0;
}