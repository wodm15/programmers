#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    vector <int> a;

    for(int i=0; i< N ; ++i){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    sort(a.begin() , a.end());

    for(int i=0; i< N ; ++i){
        cout << a[i] << '\n';
    }

    return 0;
    
}