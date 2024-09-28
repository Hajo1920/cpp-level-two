#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void SaveVectorDataToFile(vector <string> vFile, string file){
    fstream myFile;
    myFile.open(file, ios::out);
    if(myFile.is_open()){
        for(string vFiles: vFile){
            if(vFiles != ""){
                myFile << vFiles << endl;
            }
        }
    }
    myFile.close();
}

void LoadDataFromFileToVector(string file, vector <string> &vFile){
    fstream myFile;
    myFile.open(file, ios::in);
    if(myFile.is_open()){
        string data;
        while(getline(myFile, data)){
            
                vFile.push_back(data);
            
        }
    }
    myFile.close();
    
}

void UpdateRecordToFile(string file, string record, string update){
    vector <string> strVector;
    LoadDataFromFileToVector(file, strVector);

    for(string &vFiles: strVector){
        if(vFiles == record){
            vFiles = update;
        }
    }
    SaveVectorDataToFile(strVector, file);
}



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
  
    cout << "File record before Delete: " << endl;
    PrintFileContent("myText.txt");

    UpdateRecordToFile("myText.txt", "Jemal", "Omar");

    cout << "File record after Delete: " << endl;
     PrintFileContent("myText.txt");
    return 0;
}