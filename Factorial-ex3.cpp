// Add your code here
#include <iostream> 
using namespace std;

int main() {
    for (int i = 1; i<=10; i++){
        int factorial = 1;
        for (int j = 1; j <=i; j++){
            factorial *=j;
        }
        cout << "Loop count: " << i << " for which factorial is " << factorial << endl;
    }
    return 0;
}