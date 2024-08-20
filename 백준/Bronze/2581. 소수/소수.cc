#include <iostream>
#include <cmath>
using namespace std;

// 소수인지 확인하는 함수
bool isPrime(int n) {
    if (n < 2) return false; 
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int M, N;
    cin >> M >> N;
    
    int sum = 0;
    int min = -1;

    for (int i = M; i <= N; ++i) {
        if (isPrime(i)) {
            sum += i;
            if (min == -1) { 
                min = i;
            }
        }
    }

    if (min == -1) {
        cout << -1 << endl;  
    } else {
        cout << sum << endl << min << endl;  
    }

    return 0;
}
