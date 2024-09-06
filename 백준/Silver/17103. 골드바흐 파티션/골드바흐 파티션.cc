#include <iostream>
#include <vector>

using namespace std;

void checkPrime(int num , vector<bool>& isPrime){
    fill(isPrime.begin(), isPrime.end(), true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= num; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= num; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int goldPlus(int temp, const vector<bool>& isPrime) {
    int result = 0;
    for (int i = 2; i <= temp / 2; ++i) {
        if (isPrime[i] && isPrime[temp - i]) {
            result++;
        }
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    const int max_number = 1000000;
    vector<bool> isPrime(max_number + 1);
    checkPrime(max_number, isPrime);

    int T;
    cin >> T;

    while (T--) {
        int temp;
        cin >> temp;
        cout << goldPlus(temp, isPrime) << '\n';
    }
}
