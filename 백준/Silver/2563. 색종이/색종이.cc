#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N; //색종이 수
    cin >> N;
    int result =0;
    int range[100][100] = {0,};

    for(int i=0; i< N ;++i)
        {
            int x,y;
            cin >> x >> y;
            for(int j = x ; j < 10+x ;++j){
                for(int k = y ; k < 10+y ; ++k){
                    range[j][k] = 1;
                }
            }
        }
    for(int i= 0 ; i<100 ; ++i)
        {
            for(int j = 0 ; j <100 ; ++j)
                if(range[i][j] == 1)
                    ++result;
        }
    cout << result;
}