#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string N;
    cin >> N;
    set<string> result;

    for(int i=0; i<N.size() ; ++i){
        string tmp = "";
        for(int j=i ; j < N.size() ; ++j){
            tmp += N[j];
            result.insert(tmp);
        }
    }

    cout <<result.size();
}