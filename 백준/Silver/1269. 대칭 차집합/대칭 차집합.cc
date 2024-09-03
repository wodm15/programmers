#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int result=0;

    unordered_set<int> a_set;
    unordered_set<int> b_set;

    for(int i=0; i<N ;++i){
        int tmp;
        cin >> tmp;
        a_set.insert(tmp);
    }

    for(int i=0; i<M; ++i){
        int tmp;
        cin >> tmp;
        b_set.insert(tmp);
    }

    for(int elem : a_set) {
        if(b_set.find(elem) == b_set.end()) {
            result++;
        }
    }
    
    for(int elem : b_set) {
        if(a_set.find(elem) == a_set.end()) {
            result++;
        }
    }


    cout << result;
}