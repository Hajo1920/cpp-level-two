#include <ctime>
#include <iostream>

using namespace std;

int main(){
    time_t t = time(0);

    char* date = ctime(&t);

    cout << "Local date and time is: " << date << endl;

    tm* gmtm = gmtime(&t);
    date = asctime(gmtm);

    cout << "UTC date and time is: " << date;

    return 0;
}