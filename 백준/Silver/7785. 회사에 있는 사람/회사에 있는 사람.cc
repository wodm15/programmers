#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int N;
    cin >> N;
    set <string> employee;
    
    for(int i=0; i<N ; ++i){
        string name, isWork;
        cin >> name >> isWork;

        if(isWork == "enter"){
            employee.insert(name);
        }
        if(isWork == "leave"){
            employee.erase(name);
        }
    }

    for(auto i= employee.rbegin() ; i != employee.rend() ; ++i){
        cout << *i << '\n';
    }
    
}