#include <iostream>

using namespace std;

// long long factorial(int N){
//     long long int result=1;
//     while(N>1){
//         result = result * N;
//         N--;
//     }

//     return result;
// }

long long combination(int m, int n) {
    long long result=1;
    for(int i=1 ;i<=n ; ++i){
        result = result * (m-i+1) /i;
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    for(int i=0 ; i< t ; ++i){
        int n,k;
        cin >> n >> k;
        cout << combination(k, n) << endl;
    }
    return 0;
}