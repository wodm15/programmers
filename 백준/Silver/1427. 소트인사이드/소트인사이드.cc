#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string N;
    cin >> N;
    vector <int> a;

    for(int i=0 ; i< N.size() ; ++i){
        int tmp = N[i] - '0';
        a.push_back(tmp);
    }

    sort(a.begin() , a.end() , [](int a, int b){
        return a > b;
    });

    for(int i=0 ; i< N.size() ; ++i){
        cout << a[i];
    }

    return 0;
    
}