#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector <int> a;
    for(int i=0 ; i< N; ++i){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    sort(a.begin() , a.end());

    for(int i=0 ; i< N; ++i){
        cout << a[i]<< endl;
    }
}