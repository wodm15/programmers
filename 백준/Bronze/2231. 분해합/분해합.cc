#include <iostream>
using namespace std;

int main() {
    //245 의 분해합은 245 + 11 = 256
    //256 입력 시 245 나와야함
    int N;
    bool found = false;
    cin >> N;

    for(int i=1 ; i< N ;++i){
        int sum= i;
        int tmp = i;

        while(tmp >= 1){
            sum = sum + tmp % 10;
            tmp = tmp/10;
        }
        
        if(sum == N){
            found = true;
            cout << i << endl;
            break;
        }
    }

    if(!found) {
    cout << 0 << endl; 
    }
    return 0;
}