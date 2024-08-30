#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    int cnt = 0;
    int start_num = 666;

    while(true){
        string str = to_string(start_num);

        if(str.find("666")!= string::npos){
            cnt++;
        }

        if(cnt == N){
            cout << start_num << endl;
            break;
        }
        start_num++;
    }

    return 0;
    
}