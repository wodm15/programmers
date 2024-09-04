#include <iostream>
using namespace std;

//최대공약수
int gcd(int a, int b){
    while(b!=0){
        int temp =b;
        b = a%b;
        a = temp;
    }
    return a;
}
//최소공배수
int lcm(int a, int b){
    return a*b / gcd(a,b);
}

int main() {
    int N;
    cin >> N;

    for(int i=0 ; i< N ; ++i){
        int a, b;
        cin >> a >> b;
        cout << lcm(a,b) << '\n';
    }
}

