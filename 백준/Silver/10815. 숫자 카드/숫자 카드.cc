#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int N ,M;
    cin >> N;
    set <int> a;
    vector <int> b;
    for(int i=0 ; i< N ; ++i){
        int input;
        cin >> input;
        a.insert(input);
    }

    cin >> M;
    
    for(int i=0; i< M ;++i){
        int input;
        cin >> input;
        b.push_back(input);
    }

    for(int i=0; i< b.size() ;++i){
        if (a.find(b[i]) != a.end())  
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }


    return 0;
}
