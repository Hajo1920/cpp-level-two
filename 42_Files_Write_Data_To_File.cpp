#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream myFile;

    // using ios::out also helps to check if file is available if there is no file it will be created automatically
    myFile.open("myText.txt", ios::out); //write mood
    // whenever you run the program in write mood the previous data in text file will be replaced
    // by the newly inserted text.

    if(myFile.is_open()){
        myFile << "Name: Ahmed Osman\n";
        myFile << "Job: Software Enginner \n";
        myFile << "Dream: to be successful programmer \n";
        myFile.close();
    }
    return 0;
}