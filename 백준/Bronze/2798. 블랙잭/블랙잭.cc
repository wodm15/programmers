
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    int result = 0;

    // 브루트 포스
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                int sum = a[i] + a[j] + a[k];
                if (sum <= M) {
                    result = max(result, sum);
                }
            }
        }
    }

    cout << result << endl;
    return 0;
}