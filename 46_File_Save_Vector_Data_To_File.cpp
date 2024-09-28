#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void SaveDataFromVectorToFile(string file, vector <string>& extractor){
    fstream myFile;
    myFile.open(file, ios::out); // readmood

    if(myFile.is_open()){
        for(string &vData: extractor){
            if(vData != ""){
                myFile << vData << endl;
            }
        }
    }
}

int main(){
    vector <string> strVector = {
        "Data Loaded from Vector:",
        "Name List:",
        "Ahmed Osman",
        "Munir Mohammed",
        "Suleiman Adem"
    };
    SaveDataFromVectorToFile("myText.txt", strVector);

    return 0;
}