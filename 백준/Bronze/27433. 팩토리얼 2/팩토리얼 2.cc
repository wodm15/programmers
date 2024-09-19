#include <iostream>

using namespace std;

long factorial(int n) {
    long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i; 
    }
    return result; 
}

int main() {
    int N;
    cin >> N; 

    cout << factorial(N); 
    return 0;
}
