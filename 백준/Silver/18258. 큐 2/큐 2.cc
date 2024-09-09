#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    queue <int> a;

    while(N--){
        string temp;
        cin >> temp;
        if(temp == "push"){
            int input;
            cin >> input;
            a.push(input);
        }
        else if(temp == "front"){
            if(a.empty())
                cout << -1 <<'\n';
            else
                cout << a.front() << '\n';
        }
        else if(temp == "back"){
            if(a.empty())
                cout << -1 <<'\n';
            else
                cout << a.back() << '\n';
        }
        else if(temp == "empty"){
            if(a.empty())
                cout << 1 <<'\n';
            else
                cout << 0 <<'\n';
        }
        else if(temp == "size"){
            cout << a.size() <<'\n';
        }
        else if(temp == "pop"){
            if(a.empty())
                cout << -1 <<'\n';
            else{
                cout << a.front() <<'\n';
                a.pop();
            }
        }
    }
    
    return 0;
}