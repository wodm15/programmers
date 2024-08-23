#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int minX =10000, minY=10000 , maxX=-10000, maxY=-10000;
    
    if(N<=1){
        cout << 0 << endl;
        return 0;
    }
    
    for(int i=0 ; i<N ; ++i){
        int x , y;
        cin >> x >> y;

        if(minX > x){
            minX = x;
        }
        if(maxX < x){
            maxX = x;
        }

        if(minY > y){
            minY = y;
        }
        if(maxY < y){
            maxY =y;
        }
    }

    int result = (maxX - minX) * (maxY - minY);
    cout << result;
    return 0;
}