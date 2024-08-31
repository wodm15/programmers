#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector <pair <int , string>> a;

    for(int i=0 ; i< N ; ++i){
        int x;
        string y;
        cin >> x >> y;
        a.push_back({x,y});
    }

    stable_sort(a.begin() , a.end() , [](pair<int , string> x , pair<int, string> y){
        return x.first < y.first;  
    });
    
    for(int i=0; i< a.size() ;++i){
        cout << a[i].first << ' ' << a[i].second << '\n';
    }
}