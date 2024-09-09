#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue <int> q;

    int N , M;
    cin >> N >> M;
    
    for(int i=1 ; i<= N ; ++i){
        q.push(i);
    }
    cout << "<";
    while(q.size() > 1){
        for(int i=1 ; i< M ; ++i){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << ">";
    return 0;
}
