#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    deque <int> a;
    while(N--){
        int input;
        cin >> input;

        if(input == 1){
            int temp;
            cin >> temp;
            a.push_front(temp);
        }
        else if(input == 2){
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        else if(input == 3){
            if(a.empty())
                cout << -1 << '\n';
            else{
                cout << a.front() << '\n';
                a.pop_front();
            }
        }
        else if(input == 4){
            if(a.empty())
                cout << -1 << '\n';
            else {
                cout << a.back() << '\n';
                a.pop_back();
            }
        }
        else if(input == 5){
            cout << a.size() << '\n';
        }

        else if(input == 6){
            if(a.empty()){
                cout << 1 << '\n';
            }
            else
                cout << 0 << '\n';
        }
        else if(input == 7){
            if(a.empty()){
                cout << -1 << '\n';
            }
            else
                cout << a.front() << '\n';
        }
        else if(input == 8){
            if(a.empty()){
                cout << -1 << '\n';
            }
            else
                cout << a.back() << '\n';
        }
        
    }
}