#include <iostream>
using namespace std;

int main(){

    int Page = 1, TotalPages=20;

    printf("the page number = %d \n", Page);
    printf("The book starts from page %d and ends on page %d ", Page, TotalPages);

    // width specific
    printf("The page number: %0*d \n", 2, Page);
    printf("The page number: %0*d \n", 3, Page);
    printf("The page number: %0*d \n", 4, Page);
    printf("The page number: %0*d \n", 5, Page);

    int Number1 = 20, Number2 = 30;

    printf("The sum of Number1 and Number2 is %d + %d = %d \n", Number1, Number2, Number1+Number2);

    return 0;
}