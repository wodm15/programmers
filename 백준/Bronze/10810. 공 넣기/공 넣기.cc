#include <iostream>
using namespace std;

int main(){
    int N , M ; // N 은 바구니 개수 , M은 공을 넣을 횟수 
    cin >> N >> M;
    
    int num[N];
    
    for (int x = 0; x < N; ++x) {
        num[x] = 0;
    }

    for(int a=0 ; a < M ; ++a)
        {
            int i,j,k;
            cin >> i >> j >> k;
            for (int b = i-1 ; b<j ; ++b)  //i부터 j까지
                {
                    num[b] = k;
                }
        }

    for(int c=0 ; c < N ; ++c)
        {
            cout << num[c] << ' ';
        }
    
}