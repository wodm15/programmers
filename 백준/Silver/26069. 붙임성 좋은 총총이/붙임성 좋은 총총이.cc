#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    int T;
    cin >> T;
    unordered_set<string> dancer;
    dancer.insert("ChongChong");

    for(int i=0 ; i<T ;++i){
        string a,b;
        cin >> a >> b;

        if(dancer.count(a) || dancer.count(b))
        {
            dancer.insert(a);
            dancer.insert(b);
        }
    }
    cout << dancer.size() << '\n';
    return 0;
}