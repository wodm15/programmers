#include <iostream>

using namespace std;

int main() {
    int T;
    
    cin >> T;
    for(int i=0 ; i < T ; ++i)
        {
            int result1 = 0;
            int result2 = 0;
            int result3 = 0;
            int result4 = 0;
            int tmp=0;
            cin >> tmp;
            
            if(tmp >= 25){
                result1 = tmp / 25;
                tmp = tmp % 25;
            }
            cout << result1 << ' ';
            
            if (tmp >= 10){
                result2 = tmp / 10;
                tmp = tmp % 10;
            }
            cout << result2 << ' ';

            if (tmp >= 5){
                result3 = tmp / 5;
                tmp = tmp % 5;
            }
            cout << result3 << ' ';

            cout << tmp << endl;
        }
    return 0;
}