#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {

    while(true){
        string sentence;
        getline(cin , sentence);

        if(sentence == "."){
            break;
        }
        
        stack <char> check_s;
        bool isValid = true;
        
        for(int i=0 ; i< sentence.length() ; ++i){
            if(sentence[i] == '(' || sentence[i] == '['){
                check_s.push(sentence[i]);
            }
            else if(sentence[i] == ')'){
                if(!check_s.empty() && check_s.top() == '(')
                    check_s.pop();
                else{
                    isValid = false;
                    break;
                }
            }
            else if(sentence[i] == ']'){
                if(!check_s.empty() && check_s.top() == '[')
                    check_s.pop();
                else{
                    isValid = false;
                    break;
                }
            }
        }

        if (isValid && check_s.empty()) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }
    
    return 0;
}