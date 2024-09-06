#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int result = 0;
    int N;
    cin >> N;

    stack <int> jae_min;

    while(N--){
        int temp;
        cin >> temp;
        
        if(temp == 0){
            jae_min.pop();
        } else{
            jae_min.push(temp);
        }
    }

    while(!jae_min.empty()){
        result+=jae_min.top();
        jae_min.pop();
    }

    cout << result;
}