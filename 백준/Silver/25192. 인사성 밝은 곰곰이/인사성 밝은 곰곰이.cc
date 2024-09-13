#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int T;
    set<string> _compare;
    int result=0;
    cin >> T;

    while(T--){
        string element;
        cin >> element;
        
        if(element == "ENTER")
            _compare.clear();
        else
            if(_compare.find(element) == _compare.end()){
                _compare.insert(element);
                result++;
            }  
    }

    cout << result;
}