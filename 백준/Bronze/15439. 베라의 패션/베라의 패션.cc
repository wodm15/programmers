#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    cout << N * (N-1);
    return 0;
}