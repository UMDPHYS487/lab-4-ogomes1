// add your code here
#include <iostream> 
using namespace std; 
int main(){
int num;
cout << "Enter a number: ";
cin >> num;

switch (num) {
    case 0: 
    case 2: 
    case 4:
    case 6:
    case 8:
    if (num < 10 ){ 
        cout << "squared " << num * num << endl;
    }
    break; 
    default:
            if (num % 2 != 0) {
                cout << "Number/2: " << num / 2.0 << endl; 
            } else {
                cout << "hahaha" << endl;
            }
            break;
    }

    return 0;
}