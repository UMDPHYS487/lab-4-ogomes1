// your code here
#include <iostream>
using namespace std;
int y = 4;
int *x;
int main() { 
    x = &y; // Define an integer outside the loop
    cout << "Memory address of y: " << x << endl;
    cout << "Pointer is : " << *x << endl;

    *x = 8;

    cout << "New Value of pointer is " << y << endl;
}