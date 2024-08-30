#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    vector <int> a;
    
    for(int i=0 ; i< N ;++i){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    sort(a.begin() , a.end() , [](int a , int b){
        return a > b;
    });

    cout << a[M-1];

    return 0;
}