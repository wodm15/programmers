#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int a;
    string b;

    int c=1;
    int output = 0;
    int result = 0;
    cin >> a >> b;
    reverse(b.begin(),b.end());
    for(char t : b){
        int d = t-'0';
        output = a * d;
        result +=output*c;
        cout << output <<endl ;
        c = c*10;
    }
    cout << result;
    return 0;
    
}