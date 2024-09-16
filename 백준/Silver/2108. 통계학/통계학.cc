#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

int main(){
    int T; //홀수
    cin >> T;
    vector <int> ele;
    map <int , int> freq;
    
    double sum=0;
    int middle=0;

    for(int i=0 ; i<T; ++i){
        int element;
        cin >> element;
        ele.push_back(element);
        sum += ele[i];
        freq[ele[i]]++;
    }
    //산술연산
    int average = static_cast<int>(round(sum / T)); 
    
    sort(ele.begin(), ele.end());
    middle = ele[T/2];

    //최빈값
    int freqInt = 0; //최빈값 변수
    int maxfreq = 0; //최대 빈도수
    bool secondmax = false;

    for(auto pair : freq){
        if(pair.second > maxfreq){
            maxfreq = pair.second;
            freqInt = pair.first;
            secondmax = false;
        }
        else if(pair.second == maxfreq){
            if (!secondmax) { 
            freqInt = pair.first;
            secondmax = true; 
            }
        }
    }
    
    //범위 값
    int range = ele.back() - ele.front();

    cout << average << '\n';
    cout << middle << '\n';
    cout << freqInt <<'\n';
    cout << range << '\n';
}