#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector <pair <int , int>> a;
    
    for(int i=0; i< N ; ++i){
        int tmp1 , tmp2;
        cin >> tmp1 >> tmp2;

        a.push_back({tmp1 , tmp2});
    }

    sort(a.begin() , a.end());

    for(int i=0; i< N ;++i){
        cout << a[i].first << " " << a[i].second << '\n';
    }

    
}