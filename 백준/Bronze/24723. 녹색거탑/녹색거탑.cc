#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    cout << (1 << N);
    return 0;
}