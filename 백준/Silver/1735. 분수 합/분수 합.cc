#include <iostream>

using namespace std;

//최대공약수
int gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a= temp;
    }
    return a;
}

int main() {
    int a1, a2 , b1, b2;
    cin >> a1 >> a2 >> b1 >>b2;

    //분수 : fraction , 분모: denominator
    int fraction = (a1 * b2) + (b1 * a2);
    int denominator = a2 * b2;

    int t = gcd (fraction, denominator);
    cout << fraction/t << " "<< denominator/t;
    
}