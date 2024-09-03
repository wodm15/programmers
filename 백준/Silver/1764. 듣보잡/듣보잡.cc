#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    int N , M;
    cin >> N >> M;

    unordered_set <string> save_name;
    vector <string> insert_name;

    for(int i= 0 ; i< N ;++i){
        string tmp;
        cin >> tmp;
        save_name.insert(tmp);
    }

    for(int i=0; i < M ;++i){
        string tmp;
        cin >> tmp;
        if(save_name.find(tmp) != save_name.end()){
            insert_name.push_back(tmp);
        }
    }
    sort(insert_name.begin() , insert_name.end());
    
    cout << insert_name.size() << '\n';
    for(string t : insert_name){
        cout << t << '\n';
    }
}