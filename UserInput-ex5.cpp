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
    int N;
    cout << "Enter a value for N to calculate the number of factorials: ";
    cin >> N;
    cout << "\n";
    for (int i = 1; i<=N; i++)
        cout << "Loop count: " << i << " for which, factorial is " << fact(i) << endl;
    
    return 0;
}