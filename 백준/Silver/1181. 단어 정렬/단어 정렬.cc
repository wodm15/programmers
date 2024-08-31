#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector <string> a;

    for(int i=0; i< N; ++i){
        string tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    
    
    sort(a.begin() , a.end() , [](string a, string b){
        if(a.size() == b.size())
            return a < b;
        else
            return a.size() < b.size();
    });
    //unique가 실행되고 마지막 위치의 다음 반복자를 반환되기 때문에 vector 남은 자리 비우기 가능
    a.erase (unique(a.begin() , a.end()) , a.end());

    for(int i=0 ; i< a.size() ;++i){
        cout << a[i] << '\n';
    }
}