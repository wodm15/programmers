#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    deque <pair <int, int> > a;

    vector <int> result;

    //값 대입
    for(int i=0 ; i< N ;++i){
        int temp;
        cin >> temp;
        a.push_back({i+1 , temp});
    }
    
    while(!a.empty()){
        int index = a.front().first; //풍선 위치
        int move = a.front().second; //풍선 번호(이동 값)
        result.push_back(index); //결과 저장하기
        a.pop_front();//풍선 터트리기
        
        if(a.empty())
            break;//터트리고 비었으면 break;

        //dequq 번호만큼 이동하기
        if(move > 0 ){
            for(int i=0; i < move-1 ; ++i){
                a.push_back(a.front());
                a.pop_front();
            }
        }
        else{
            for(int i=0 ; i< -move ; ++i){
                a.push_front(a.back());
                a.pop_back();
            }
        }
    }

    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}