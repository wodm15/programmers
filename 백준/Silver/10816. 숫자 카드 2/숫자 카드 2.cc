#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;

    // vector <int> push_card;
    map <int , int > get_card;

    cin >> N;
    for(int i=0 ; i< N ; ++i){
        int tmp;
        cin >> tmp;
        ++get_card[tmp];
    }

    cin >> M;
    vector <int> push_card(M);
    for(int i=0; i<M ; ++i){
        int tmp;
        cin >> tmp;
        push_card[i] = tmp;
    }

    for(int i=0; i<M ; ++i){
        cout << get_card[push_card[i]] << ' ';
    }
}