#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector < pair <int, int> > a;

    for(int i=0 ; i< N ; ++i){
        int x , y;
        cin >> x >> y;
        a.push_back( {x,y});
    }

    sort(a.begin() , a.end() , [](pair<int, int> a , pair <int, int> b){
        if(a.second == b.second)
            return a.first < b.first;
        else
            return a.second < b.second;
    });
    
    for (int i = 0; i < N; ++i) {
        cout << a[i].first << " " << a[i].second << '\n';
    }

    return 0;
}