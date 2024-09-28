#include <iostream>
#include <cmath>

using namespace std;

int Sum(int a, int b){
    int c = 0;
    c = (a + b);

    return c;
}

int main(){

    int arr1[5] = { 200,100,50,25,30 }; 
    int a, b, c;     
     a = 10;      
     b = 20;      
     a++;         
     ++b;         
    c = a + b;    
    cout << a << endl;      
    cout << b << endl;     
    cout << c << endl; 
     
     for (int i = 1; i <= 5; i++) { 
        
        cout << i << endl;           
        a = a + a * i;  
        
        }         
        c = Sum(a, b);      
        cout << c;    
         return 0; 
         } 

