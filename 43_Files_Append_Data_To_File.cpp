#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream myFile;

    // we know that ios::out will overwrite any content on the file.
    // unlike ios::out , ios::app will only add new data after any existing data.
    myFile.open("myText.txt", ios::out | ios::app); // priority is always for append
     if(myFile.is_open()){

        myFile << "Note: this is from append mood:) \n";
        myFile << "Name: Munir Saleh\n";
        myFile << "Job: Electrical Enginner \n";
        myFile << "Dream: to have a successful IT Company  \n";
        myFile.close();
    }
    return 0;
}