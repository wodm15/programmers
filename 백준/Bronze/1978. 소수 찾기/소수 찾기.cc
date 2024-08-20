#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    int result=0;
    cin >> t;
    for(int i=0; i< t ; ++i)
        {
            int tmp;
            int sum=0;
            
            cin >> tmp;

            bool isPrime = true;

            if (tmp <= 1) {
                isPrime = false;
            } else {
                for(int j = 2; j<= sqrt(tmp) ; ++j) {
                    if(tmp % j == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }

        if(isPrime) {
            ++result;
        }
    }
    
    cout << result;
}