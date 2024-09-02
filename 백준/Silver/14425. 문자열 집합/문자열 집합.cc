#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    set <string> a;
    vector <string> b;
    int result = 0;

    for(int i=0; i< N ; ++i){
        string tmp;
        cin >> tmp;
        a.insert(tmp);
    }

    for(int i=0 ; i< M ; ++i){
        string tmp;
        cin >> tmp;
        b.push_back(tmp);
    }

    for(int i=0 ; i< b.size() ; ++i){
        if(a.find(b[i]) != a.end())
            result++;
    }

    cout << result;
}