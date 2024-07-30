#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <vector <int>> v(9,vector<int> (9,0) );
    int tmp;
    int max=0;
    int row, column ;
    for(int i = 0 ; i < 9 ; ++i)
        {
            for(int j = 0 ; j < 9 ; ++j)
                {
                    cin >> tmp;
                    v[i][j] = tmp;
                }
        }

    for(int i = 0 ; i < 9 ; ++i)
        {
            for(int j = 0 ; j < 9 ; ++j)
                {
                    if(max <= v[i][j]){
                        max = v[i][j];
                        row = i+1;
                        column = j+1;
                    }
                }
        }

    cout << max << endl << row <<  ' ' << column;
}