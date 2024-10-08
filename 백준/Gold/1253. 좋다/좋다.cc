#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    vector <int> _vec(N);
    for(int i=0;i<N; ++i)
        {
            cin >> _vec[i];
        }

    sort(_vec.begin(), _vec.end());

    int result =0;

    for(int k=0; k<N ; ++k)
        {
            long find = _vec[k];
            int i = 0;
            int j = N-1;

            while(i<j){
                if(_vec[i] + _vec[j] == find){
                    if(i != k && j != k){
                        result++;
                        break;
                    } else if(i == k){
                        i++;
                    } else if(j == k){
                        j--;
                    }
                }
                else if(_vec[i] + _vec[j] > find){
                    j--;
                } 
                else if(_vec[i] + _vec[j] < find){
                    i++;
                }
            }
        }

    cout << result;
    return 0;
}