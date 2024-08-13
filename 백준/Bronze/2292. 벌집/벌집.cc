#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    if (N == 1) {
        cout << 1;
        return 0;
    }

    int layer = 1;  
    int cells = 1;  

    while (cells < N) {
        cells += 6 * layer; 
        layer++;
    }

    cout << layer;
    return 0;
}
