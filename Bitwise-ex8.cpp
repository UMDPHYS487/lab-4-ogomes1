// Your code here
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> b{0b01110010};
    cout << ~b << " (initial value) \n"; 
    for (; b.any(); b>>=1){
        while(!b.test(0))
        b >>=1; 
        cout <<  ~b << "\n";
    }  
cout << ~b << " (final value) \n";
}