#include <iostream>
using namespace std;

int main() {

    int num = 10;
    int div = 42;
    int n[div] = {0,};
    int cnt = 0;
    
    for (int i= 0 ; i< num ; ++i)
        {
            int tmp;
            cin >> tmp;
            n[tmp%div] = 2;
        }
    for (int i= 0 ; i< div ; ++i)
        {
            if(n[i] > 0 )
                cnt++;
        }

    cout <<cnt;
    return 0;
}