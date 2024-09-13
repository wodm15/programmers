#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int N;
    cin >> N;
    vector <int> a;
    for(int i=0 ; i<N ;++i){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    sort(a.begin(), a.end());

    int result =0;
    result = a[0] * a[N-1];
    cout << result;
    return 0;
}