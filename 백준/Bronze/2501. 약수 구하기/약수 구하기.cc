#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int seq = 0;
    for(int i=1 ; i<= a ; ++i)
        {
            if(a%i == 0 ){
                ++seq;
                if(seq == b){
                    cout << i;
                    return 0;
                }
            }
        }
    cout << 0;
    return 0;
}