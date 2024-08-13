#include <iostream>

using namespace std;

int main() {
    int N;
    int result = 1;
    cin >> N;

    result = ( 1 << N) +1;



    cout << result * result;
    
    return 0;
}