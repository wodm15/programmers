#include <iostream>

using namespace std;

bool isPrime(long long n){
    if(n<=1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(long long i=3 ; i*i <=n ; i+=2){
        if(n%i ==0) return false;
    }
    return true;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int a,b;
    cin >> a >> b;

    int exe = b-a+1;
    while(exe--){

        if(isPrime(a)){
            cout << a << '\n';
        }
    a++;
    }
}