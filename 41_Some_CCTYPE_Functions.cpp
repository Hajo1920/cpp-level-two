#include <cctype>
#include <iostream>

using namespace std;

int main(){
   char x;
   char y;
   // changes lower alphabet charcter to upper and upper to lower, 
   // if any wrong character like digits and special chars given it will return the given character
   x = toupper('a'); 
   y = tolower('A');

   cout << "Converting a to A: " << x << endl;
   cout << "Converting A to a: " << y << endl;

   // returns any positive digit if true and returns zero if false.

   cout << isupper('A') << endl; // (A-Z)

   cout << islower('a') << endl; // (a-z)

   cout << isdigit('8') << endl; // from 0 to 9;

   cout << ispunct('&') << endl; // all special characters ~!@#$%^&*()_-{}=[]\|/+<>.,;:'"" 


    return 0;
}