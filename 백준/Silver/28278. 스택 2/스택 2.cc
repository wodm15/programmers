#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;

    stack<int> s;

    while (N--) {
        int order_number;
        cin >> order_number;
        
        switch (order_number) {
            case 1: {
                int temp;
                cin >> temp;
                s.push(temp);
                break;
            }
            
            case 2:
                if (s.empty()) {
                    cout << -1 << '\n';
                } else {
                    cout << s.top() << '\n'; 
                    s.pop();  
                }
                break;

            case 3:
                cout << s.size() << '\n';
                break;

            case 4:
                cout << (s.empty() ? 1 : 0) << '\n';
                break;

            case 5:
                if (s.empty()) {
                    cout << -1 << '\n';
                } else {
                    cout << s.top() << '\n';
                }
                break;

            default:
                cout << "잘못된 명령어" << '\n';
                break;
        }
    }

    return 0;
}
