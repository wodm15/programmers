#include <iostream>

using namespace std;

int fac(int N){
    int result=1;
    while(N>1){
        result = result * N;
        N--;
    }

    return result;
}
int main() {
    int output;
    int n,k;
    cin >> n >> k;
    output = fac(n) / (fac(n-k) * fac(k)) ;
    cout << output;
}