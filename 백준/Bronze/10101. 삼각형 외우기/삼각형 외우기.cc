#include <iostream>
using namespace std;

int main() {
    int a,b,c;

    cin >> a >> b >> c;

    if(a + b + c == 180){
        if(a == b && b == c){
            cout << "Equilateral" << endl;
        }
        else if(a != b && b != c && a!= c){
            cout << "Scalene" << endl;
        }
        else {
            cout << "Isosceles" << endl;
        }
    }
    else {
        cout << "Error" << endl;
    }
    return 0;
}