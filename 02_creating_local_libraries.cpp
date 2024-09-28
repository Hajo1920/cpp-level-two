#include <iostream>
#include "libs/myLib.h"
#include "libs/inputReader.h"

using namespace std;

int main(){
    myLab::Print("Hellow my name is Ahmed");
    InputReader::IntegerReader("Enter your Age");
    InputReader::StringReader("Your message  to  worled");
    return 0;
}