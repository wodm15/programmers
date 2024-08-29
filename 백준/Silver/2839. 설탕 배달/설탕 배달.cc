#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int min=10000;
    
    //5, 3 최소값

    for(int i=0 ; i< N ;++i){
        for(int j=0 ; j < N ;++j){
            if( (3*i) +(5*j) == N ){
                if(min > i+j)
                    min = i+j;
            }
        }
    }
    if(min !=10000 ){
        cout << min;
    }
    else{
        cout << -1;
    }
}