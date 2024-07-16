#include <iostream>

using namespace std;

int main() {
    int N,M;
    cin >> N >> M;

    int bucket[N];
    for(int a=0 ; a<N ; ++a)
        {
            bucket[a] = a+1;
        }

    for (int a=0 ; a< M ; ++a)
        {
            int i,j , tmp;
            cin >> i >> j;
            tmp = bucket[i-1];
            bucket[i-1] = bucket[j-1];
            bucket[j-1] = tmp;
        }

    for(int a= 0 ; a <N ; ++a)
        {
            cout << bucket[a] << ' ';
        }
}