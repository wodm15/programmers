#include <iostream>

using namespace std;

int main(){

    int t;
    int cnt=0;
    
    cin >> t;

    int score[101];

    for (int i=0 ; i< t ; ++i){
        int tmp;
        cin >> tmp;
        score[i] = tmp;
    }

    int find;
    cin >> find;

    for (int i=0 ; i< t ; ++i){
        if(score[i] == find){
            cnt+=1;
}
}
    cout << cnt;

    return 0;
}