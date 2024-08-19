#include <iostream>

using namespace std;

int main() {
    int a = 1, b = 1;
    
    while (true) {
        cin >> a >> b;
        
        if (a == 0 && b == 0) {
            break;
        }
        
        if (b != 0 && a % b == 0) {
            cout << "multiple" << endl;
        } else if (a != 0 && b % a == 0) {
            cout << "factor" << endl;
        } else {
            cout << "neither" << endl;
        }
    }
    
    return 0;
}
