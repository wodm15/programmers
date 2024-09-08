#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    while(N--) {
        string temp;
        cin >> temp;
        stack<char> a; 
        
        bool isValid = true;
        for(int i = 0; i < temp.length(); ++i) {
            if(temp[i] == '(') {
                a.push('(');
            } else if(temp[i] == ')') {
                if(!a.empty() && a.top() == '(') {
                    a.pop();
                } else {
                    isValid = false;
                    break;
                }
            }
        }
        
        if(!a.empty()) isValid = false; 
        
        if(isValid) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}
