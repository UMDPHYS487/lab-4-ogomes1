// Add your code here
#include <iostream> 
using namespace std;

int fact(int i){
    int factorial = 1;
    for (int j = 1; j <=i; j++){
        factorial *=j;
    }
    return factorial;
}

int main() {
    for (int i = 1; i<=10; i++)
        cout << "Loop count: " << i << " for which, factorial is " << fact(i) << endl;
    
    return 0;
}