#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N = 5;
    vector <int> a;
    int medium = 0;  //평균값
    int sum = 0;
    int median = 0;  //중앙값
    
    for(int i=0; i< N ; ++i){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    for(int i=0; i< N ; ++i){
        sum += a[i];
    }
    medium = sum / 5;

    sort(a.begin() , a.end());
    median = a[2];
    
    cout << medium << endl << median;

    return 0;
}