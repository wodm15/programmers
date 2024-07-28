#include <iostream>

using namespace std;

int main(){
    int N , M;
    cin >> N >> M;

    int array1[N][M] = {0,};
    int array2[N][M] = {0, };
    int result[N][M] = {0, };

    for(int i=0 ; i< N ; ++i)
        {
            for(int j=0; j<M ; ++j)
                {
                    int tmp;
                    cin >> tmp;
                    array1[i][j] = tmp;
                }
        }
    
    for(int i=0 ; i< N ; ++i)
        {
            for(int j=0; j<M ; ++j)
                {
                    int tmp;
                    cin >> tmp;
                    array2[i][j] = tmp;
                }
        }

    for(int i=0 ; i< N ; ++i)
        {
            for(int j=0; j<M ; ++j)
                {
                    result[i][j] = array1[i][j] + array2[i][j];

                }
        }


    //결과 출력
    for(int i=0 ; i< N ; ++i)
        {
            for(int j=0; j<M ; ++j)
                {
                    cout << result[i][j] << ' ';
                }
            cout << endl;
        }
}