#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;
    int number[N];

    int max;
    int min;
    
    for (int i=0 ; i<N ; ++i){
        int tmp;
        cin >> tmp;
        number[i] = tmp; 
    }

    max = number[0];
    min = number[0];
    
    for (int i=0 ; i<N ; ++i){
        
        if(number[i] >max){
            max = number[i];
}
        if(number[i] <min){
            min = number[i];
        }
    }
    cout << min << " " << max;
    
}