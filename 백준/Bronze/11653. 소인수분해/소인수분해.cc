#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;

    for(int i=2; i <= sqrt(t) ; ++i)
        {
            while(t%i ==0){
                cout << i << endl;
                t /= i;
            }
        }
    if(t>1){
        cout << t;
    }
    return 0;
}