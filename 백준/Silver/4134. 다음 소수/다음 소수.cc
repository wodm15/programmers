#include <iostream>

using namespace std;

bool isPrime(long long a) {
    if (a <= 1) return false;
    if (a == 2) return true; 
    if (a % 2 == 0) return false; 
    for (long long i = 3; i * i <= a; i += 2) { 
        if (a % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cin >> num;

    while (num--) {
        long long N;
        cin >> N;
        while (!isPrime(N)) {
            N++; 
        }
        cout << N << '\n'; 
    }
    
    return 0;
}
