#include <iostream>
using namespace std;

int main() {
    int N , M;
    cin >> N >> M;

    int num[N];
    
    for(int i=0 ; i< N ; ++i)
        {
            num[i] = i+1;
        }

    for(int k=0 ; k< M ; ++k)
        {
            int i,j;
            cin >> i >> j;

            int left = i-1;
            int right = j-1;

            while(left <= right){
                swap(num[left], num[right]);
                ++left;
                --right;
            }
        }
    
    for(int i=0 ; i< N ; ++i)
        {
            cout <<num[i] << ' ';
        }
}