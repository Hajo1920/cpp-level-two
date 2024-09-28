#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int &r = a; // referencing r variable to a variable like as the second name for it;
    int *p = &a; // pointering to a variable by saving its address in memory to p variable;

    cout << "Referencing: " << &r << endl;
    cout << "Pointering: " << p << endl;

    int b = 20;
    // here we can't re reference variable b to variable r hence it is already assigned to a variable
    // &r = b; error;

    cout << "vlaue of pointer p to variable a address: " << p << endl;
    cout << " pointering to value of a: " << *p << endl;

    // but we can re pointer p to variable b and assign the new address of variable b at run time
    p = &b; // now the pointer p have new address

    cout << "vlaue of pointer p is now variable b address: " << p << endl;
    cout << " pointering to value of b: " << *p << endl;
    
   

    return 0;
}